#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Cesar.h"
#include "Cesar2.h"
#include "Vigenere.h"
#include <iostream>
#include <string>

int main() {
	
	std::cout << "Test de la classe BasicEncryt" << std::endl;
	BasicEncrypt word("test");
	BasicEncrypt word2("bonjour");
	word.setplain();
	word2.setcypher();
	word2.decode();
	word.encode();
	std::cout << word.getcypher() << word2.getplain()<<std::endl;
	word.getplain();

	std::cout << "Test de la classe Cesar avec un mot" << std::endl;
	Cesar code("ceci est une phrase avec un espace");
	code.set_plain();
	code.encode();
	std::cout << code.get_cypher() << std::endl;
	Cesar reverse("gigm iwx yri tlvewi ezig yr iwtegi");
	reverse.set_cypher();
	reverse.decode();
	std::cout << reverse.get_plain() << std::endl;

	std::cout << "Test de la classe Cesar avec un fichier" << std::endl;
	Cesar fichier("D:/TP4/Text.txt");
	fichier.read();
	fichier.encode();
	std::cout << fichier.get_cypher() << std::endl;
	fichier.write();
	
	std::cout << "Test de la classe Cesar2 pour decrypter un fichier" << std::endl;
	Cesar2 oucca("D:/TP4/Cesar2.txt");
	oucca.read();
	oucca.decode();
	oucca.write();
	std::cout << "Test de la classe Cesar2 pour crypter un fichier" << std::endl;
	Cesar2 oucca2("D:/TP4/Cesar2.txt");
	oucca.read();
	oucca.encode();
	oucca.write();

	std::cout << "Test de la classe Vigenere pour crypter un fichier" << std::endl;
	Vigenere clef("D:/TP4/Oui.txt","oui");
	clef.read();
	clef.encode();
	clef.write();
	std::cout << "Test de la classe Vigenere pour decrypter un fichier" << std::endl;
	Vigenere clef2("D:/TP4/Non.txt", "oui");
	clef2.read();
	clef2.decode();
	clef2.write();
	return 0;
}