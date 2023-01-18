#pragma once
#include <iostream>
#include<string>

class Encrypt
{
public:
	Encrypt(std::string word);
	std::string get_plain();
	std::string get_cypher();
	virtual void encode()=0;
	//virtual void decode()=0;

protected:
	std::string _plain;
	std::string _cypher;
	std::string _word;

};

