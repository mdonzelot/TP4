#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Cesar.h"
#include <iostream>
#include <string>

int main() {

	BasicEncrypt word("test");
	BasicEncrypt word2("bonjour");
	word.setplain();
	word2.setcypher();
	word2.decode();
	word.encode();
	std::cout << word.getcypher() << word2.getplain()<<std::endl;
	word.getplain();

	Cesar code("test");
	code.encode();
	std::cout << code.get_cypher() << std::endl;

	

	
	return 0;
}