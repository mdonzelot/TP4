#pragma once
#include <iostream>
class BasicEncrypt
{
public:
	std::string encode();
	std::string decode();


protected:
	std::string _plain;
	std::string _cypher;


};

