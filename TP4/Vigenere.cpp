#include "Vigenere.h"


void Vigenere::encode() {
	_changed.resize(_plain.size());
	int k = _key.size();
	int j = 0;
	for (int i = 0; i != _plain.size(); i++) { 
		char (x) = _key[j];
		char(y) = _plain[i];
		int b = int(y) + int(x);
		b %= 127;
		_changed[i] = char(b);
		j = (j + 1) % k;
	}
	_cypher = _changed;
}

void Vigenere::decode() {
	_changed.resize(_cypher.size());
	int k = _key.size();
	int j = 0;
	for (int i = 0; i != _cypher.size(); i++) {
		char(x) = _key[j];
		char(y) = _cypher[i];
		int b = int(y) - int (x);
		b += 127;
		_changed[i] = char(b);
		j = (j + 1) % k;
	}
	_plain = _changed;
}
