#pragma once

#include <string>
#include <boost/optional.hpp>

#include "config.h"


class	FastEncrypt
{
public:

	class	SRSAKeyPair
	{
	public:

		SRSAKeyPair() {}
		SRSAKeyPair(SRSAKeyPair&& rhs);

		std::string	PublicKey_;
		std::string	PrivateKey_;
	};

	static	std::string						AES_GenerateKey();

	static	std::string						AES_CBCEncrypt(const std::string& sKey, const std::string& plainData);
	static	std::string						AES_CBCEncrypt(const std::string& sKey, const void* plainData, std::size_t dataSize);

	static	std::string						AES_CBCDecrypt(const std::string& sKey, const std::string& cipherText);
	static	std::string						AES_CBCDecrypt(const std::string& sKey, const void* cipherText, std::size_t textSize);

	static	std::string						SHA256_Calculate(const std::string& data);

	static	bool							SHA256_Verify(const std::string &msg,const std::string &digest);


	static	SRSAKeyPair						RSA_GenerateKey();

	static	std::string						RSA_PubEncrypt(const std::string &publicKey, const std::string &plainData);

	static	boost::optional<std::string>	RSA_PriDecrypt(const std::string &privateKey, const std::string &cipherData);
};