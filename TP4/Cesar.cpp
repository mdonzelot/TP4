#include "Cesar.h"

void Cesar::encode() {
	_plain =_word;
	for (int i = 0; i <= _plain.size(); i++) {
		char x = _plain[i];
		_changed[i] = int(x) - 97;
		i++;
	};
	for (int i = 0; i <= _changed.size(); i++) {
		_changed[i] = _changed[i] % 26;
		i++;
	};
	_cypher = _changed;
}
