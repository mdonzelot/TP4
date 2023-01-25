#pragma once
#include<iostream>
#include<string>
#include "Encrypt.h"

class Vigenere : public Encrypt
{
public:
	Vigenere(std::string word, std::string key) : Encrypt(word) {
		_key = key;
	};
	void encode();
	void decode();

private:
	std::string _key;
};

