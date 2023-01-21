#pragma once
#include <iostream>
#include<string>
#include<fstream>
#include <sstream>

class Encrypt
{
public:
	Encrypt(std::string word);
	void set_plain();
	void set_cypher();
	std::string get_plain();
	std::string get_cypher();
	virtual void encode()=0;
	virtual void decode()=0;
	void read();
	void write();


protected:
	std::string _plain;
	std::string _cypher;
	std::string _word;
	std::string _changed;
	};

