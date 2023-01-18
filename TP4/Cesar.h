#pragma once
#include<iostream>
#include<string>
#include "Encrypt.h"

class Cesar : public Encrypt
{
public:
	Cesar(std::string word) : Encrypt(word) {};
	void encode();

private:
	std::string _changed;
	
};

