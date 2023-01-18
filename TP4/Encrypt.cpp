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

/*void Encrypt::decode() {
	_plain = _cypher;
}*/

Encrypt::Encrypt(std::string word) {
	_word = word;
}