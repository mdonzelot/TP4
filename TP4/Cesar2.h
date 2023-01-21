#pragma once
#include<iostream>
#include<string>
#include "Encrypt.h"

class Cesar2 : public Encrypt
{
public:
	Cesar2(std::string word) : Encrypt(word) {};
	void encode();
	void decode();

};

