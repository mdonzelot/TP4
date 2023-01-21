#include "Encrypt.h"

std::string Encrypt::get_plain() {
	return _plain;
}

std::string Encrypt::get_cypher() {
	return _cypher;
}

void Encrypt::encode() {
	_cypher = _plain;
}

void Encrypt::decode() {
	_plain = _cypher;
}

Encrypt::Encrypt(std::string word) {
	_word = word;
}

void Encrypt::set_plain() {
	_plain = _word;
}

void Encrypt::set_cypher() {
	_cypher = _word;
}

void Encrypt::read() {
	int a;
	std::cout << "taper 1 si vous allez decrypter le fichier ou 2 si vous allez le crypter" << std::endl;
	std::cin >> a;
	int i = 0;
	std::ifstream file(_word);
	if (a == 1) {
		if (file) {
			std::stringstream buffer;
			buffer << file.rdbuf();
			_cypher = buffer.str();
			file.close();
			file.close();
		}
		else
			std::cout << "Impossible d'ouvrir le fichier" << std::endl;
	}
	else if (a == 2) {
		if (file) {
			std::stringstream buffer;
			buffer << file.rdbuf();
			_plain = buffer.str();
				file.close();
		}
		else
			std::cout << "Impossible d'ouvrir le fichier" << std::endl;
	}
	else
		std::cout << "Entrez une valeur valide" << std::endl;
}

void Encrypt::write() {
	int a;
	std::cout << "Si le message a ecrire est crypte, tapez 1. Si le message a ecrire est decrypte tapez 2" << std::endl;
	std::cin >> a;
	std::ofstream file(_word,std::ios::app);
	if (file) {
		if (a == 1) {
			file << "Voici votre message crypte" << std::endl;
			file << _cypher << std::endl;
		}
		else if (a == 2) {
			file << "Voici votre message decrypte" << std::endl;
			file << _plain << std::endl;
		}
		else
			std::cout << "Entrez une valeur correcte" << std::endl;
	}
	else
		std::cout << "Nous n'avons pas pu écrire dans le fichier" << std::endl;
}