@echo off

protoc -I=. --cpp_out=. UserVCode.proto
pause
@echo on