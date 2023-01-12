#include "BasicEncrypt.h"
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




	return 0;
}