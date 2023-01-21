#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Cesar.h"
#include "Cesar2.h"
#include <iostream>
#include <string>

int main() {
	
	/*BasicEncrypt word("test");
	BasicEncrypt word2("bonjour");
	word.setplain();
	word2.setcypher();
	word2.decode();
	word.encode();
	std::cout << word.getcypher() << word2.getplain()<<std::endl;
	word.getplain();

	Cesar code("ceci est une phrase avec un espace");
	code.set_plain();
	code.encode();
	std::cout << code.get_cypher() << std::endl;
	Cesar reverse("gigm iwx yri tlvewi ezig yr iwtegi");
	reverse.set_cypher();
	reverse.decode();
	std::cout << reverse.get_plain() << std::endl;

	Cesar fichier("D:/TP4/Text.txt");
	fichier.read();
	fichier.encode();
	std::cout << fichier.get_cypher() << std::endl;
	fichier.write();*/
	
	Cesar2 oucca("D:/TP4/Cesar2.txt");
	oucca.read();
	oucca.decode();
	oucca.write();

	return 0;
}