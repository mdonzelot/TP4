#include "BasicEncrypt.h"

std::string BasicEncrypt::encode(){
	_cypher = _plain;
		return _cypher;
}

std::string BasicEncrypt::decode() {
	_plain = _cypher;
	return _plain;
}