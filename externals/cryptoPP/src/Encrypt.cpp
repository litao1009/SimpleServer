#include <boost/config/warning_disable.hpp>
#include "Encrypt.h"

//////////////////////////////////////////////////////////
#include "aes.h"
#include "files.h"		// FileSource, FileSink
#include "osrng.h"		// AutoSeededRandomPool
#include "modes.h"		// CFB_Mode
#include "Hex.h"		// HexEncoder
#include "Base64.h"		// Base64Encoder
#include "gcm.h"		// GCM模式支持
#include "sha.h"
#include "rsa.h"		// RSAES_OAEP_SHA_Decryptor   

using namespace CryptoPP;

#include <string>
#include <array>
#include <boost/functional/factory.hpp>
#include <boost/chrono.hpp>
#include <boost/random.hpp>
#include <ctime>

using namespace std;

FastEncrypt::SRSAKeyPair::SRSAKeyPair( SRSAKeyPair&& rhs ):PrivateKey_(std::move(rhs.PrivateKey_)),PublicKey_(std::move(rhs.PublicKey_))
{

}

std::string FastEncrypt::AES_GenerateKey()
{
	std::string ret(AES::DEFAULT_KEYLENGTH, 0);

	boost::mt19937 rng(static_cast<const boost::uint32_t>(time(0)));
	boost::uniform_int<> ui(0, 255);

	for ( auto& ch : ret )
	{
		ch = ui(rng);
	}

	return std::move(ret);
}


std::string FastEncrypt::AES_CBCEncrypt( const std::string& sKey, const std::string& plainData )
{
	auto res = AES_CBCEncrypt(sKey, plainData.data(), plainData.size());
	return res;
}

std::string FastEncrypt::AES_CBCEncrypt( const std::string& sKey, const void* plainData, std::size_t dataSize )
{
	std::string outstr;

	try
	{
		

		//填key
		SecByteBlock key(AES::DEFAULT_KEYLENGTH);
		std::fill(key.begin(), key.end(), 0x30);
		std::copy(sKey.begin(), sKey.size()>AES::DEFAULT_KEYLENGTH?sKey.begin()+AES::DEFAULT_KEYLENGTH:sKey.end(), key.begin());

		//填iv
		std::array<byte,AES::BLOCKSIZE>	iv;
		std::fill(iv.begin(), iv.end(), 0x30);

		AES::Encryption aesEncryption(static_cast<byte*>(key), AES::DEFAULT_KEYLENGTH);

		CBC_Mode_ExternalCipher::Encryption cfbEncryption(aesEncryption, iv.data());

		StreamTransformationFilter cfbEncryptor(cfbEncryption, boost::factory<StringSink*>()(outstr));
		cfbEncryptor.Put(reinterpret_cast<const byte*>(plainData), dataSize);
		cfbEncryptor.MessageEnd();

		return std::move(outstr);
	}
	catch(...)
	{
		return outstr;
	}
}


std::string FastEncrypt::AES_CBCDecrypt( const std::string& sKey,const std::string& cipherText )
{
	return std::move(AES_CBCDecrypt(sKey, cipherText.data(), cipherText.size()));
}

std::string FastEncrypt::AES_CBCDecrypt( const std::string& sKey, const void* cipherText, std::size_t textSize )
{
	std::string outstr;
	try
	{
		//填key
		SecByteBlock key(AES::DEFAULT_KEYLENGTH);
		std::fill(key.begin(), key.end(), 0x30);
		std::copy(sKey.begin(), sKey.size()>AES::DEFAULT_KEYLENGTH?sKey.begin()+AES::DEFAULT_KEYLENGTH:sKey.end(), key.begin());

		//填iv
		std::array<byte,AES::BLOCKSIZE>	iv;
		std::fill(iv.begin(), iv.end(), 0x30);

		CBC_Mode<AES >::Decryption cfbDecryption(static_cast<byte*>(key), AES::DEFAULT_KEYLENGTH, iv.data());

		StreamTransformationFilter decryptor(cfbDecryption, boost::factory<StringSink*>()(outstr));
		decryptor.Put(reinterpret_cast<const byte*>(cipherText), textSize);
		decryptor.MessageEnd();

		return std::move(outstr);
	}
	catch(...)
	{
		return outstr;
	}
}


std::string FastEncrypt::SHA256_Calculate( const std::string& data )
{
	SHA256 sha256;
	std::array<char,32>	byDigest;
	std::fill(byDigest.begin(), byDigest.end(), 0);

	sha256.CalculateDigest(reinterpret_cast<byte*>(byDigest.data()), reinterpret_cast<const byte*>(data.data()), data.size());

	return std::move(std::string(byDigest.begin(), byDigest.end()));
}

bool FastEncrypt::SHA256_Verify( const std::string &msg,const std::string &digest )
{
	SHA256 sha256;

	return sha256.VerifyDigest( reinterpret_cast<const byte*>(digest.data()), reinterpret_cast<const byte*>(msg.data()), msg.size() );
}



FastEncrypt::SRSAKeyPair FastEncrypt::RSA_GenerateKey()
{
	SRSAKeyPair ret;

	RandomPool randPool;

	RSAES_OAEP_SHA_Decryptor priv(randPool, 1024);//keylength设为1024
	
	StringSink privString(ret.PrivateKey_);
	//HexEncoder privString(boost::factory<StringSink*>()(ret.PrivateKey_));

	priv.DEREncode(privString);
	privString.MessageEnd();

	RSAES_OAEP_SHA_Encryptor pub(priv);

	StringSink pubString(ret.PublicKey_);
	//HexEncoder pubString(boost::factory<StringSink*>()(ret.PublicKey_));
	pub.DEREncode(pubString);
	pubString.MessageEnd();

	return std::move(ret);
}

std::string FastEncrypt::RSA_PubEncrypt( const std::string &publicKey, const std::string &plainData )
{
	try
	{
		
		StringSource pubString(publicKey, true/*, boost::factory<HexDecoder*>()()*/);
		RSAES_OAEP_SHA_Encryptor pub(pubString);

		RandomPool randPool;

		string result;
		auto ss = boost::factory<StringSink*>()(result);
		//auto he = boost::factory<HexEncoder*>()(ss);
		StringSource(plainData, true, boost::factory<PK_EncryptorFilter*>()(randPool, pub, ss));

		return std::move(result);
	}
	catch(...)
	{
		return std::string();
	}
	
}

boost::optional<std::string> FastEncrypt::RSA_PriDecrypt( const std::string &privateKey, const std::string &cipherData )
{
	static RandomPool randomPool;

	try
	{
		StringSource privString(privateKey, true/*, boost::factory<HexDecoder*>()()*/);	
		RSAES_OAEP_SHA_Decryptor priv(privString);	
		string result;	
		auto ss = boost::factory<StringSink*>()(result);
		auto pkd = boost::factory<PK_DecryptorFilter*>()(randomPool, priv, ss);
		StringSource(cipherData, true, pkd);	
		return result;
	}
	catch(...)
	{
		return boost::optional<std::string>();
	}
}