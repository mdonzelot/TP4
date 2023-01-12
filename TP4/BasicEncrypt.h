#pragma once
#include <iostream>
#include <string>
class BasicEncrypt
{
public:
	BasicEncrypt(std::string word);
	void setplain();
	std::string getplain();
	void setcypher();
	std::string getcypher();
	void encode();
	void decode();

protected:
	std::string _plain;
	std::string _cypher;

private:
	std::string _word;
};


