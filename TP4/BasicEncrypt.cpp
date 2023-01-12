#include "BasicEncrypt.h"

BasicEncrypt::BasicEncrypt(std::string word) {
	_word = word;
}
void BasicEncrypt::setplain() {
	_plain = _word;
}

std::string BasicEncrypt::getplain() {
	return _plain;
}

void BasicEncrypt::setcypher() {
	_cypher = _word;
}

std::string BasicEncrypt::getcypher() {
	return _cypher;
}

void BasicEncrypt::encode() {
	_cypher = _plain;
}

void BasicEncrypt::decode() {
	_plain = _cypher;
}