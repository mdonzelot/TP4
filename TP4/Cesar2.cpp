#include "Cesar2.h"

void Cesar2::encode() {
	_changed.resize(_plain.size());
	std::cout << "Choississez le decalage" << std::endl;
	int k;
	std::cin >> k;
	for (int i = 0; i != _plain.size(); i++) {
		char(x) = _plain[i];
			int b = int(x);
			b += k;
			b %= 127;;
			_changed[i] = char(b);
		};
		_cypher = _changed;
	}


void Cesar2::decode() {
	_changed.resize(_cypher.size());
	std::cout << "Choississez le decalage" << std::endl;
	int k;
	std::cin >> k;
	for (int i = 0; i != _cypher.size(); i++) {
		char(x) = _cypher[i];
		if (char(x) == 32) {
			_changed[i] = char(32);
		}
		else if (char(x) == 10)
			_changed[i] = char(10);
		else {
			int b = int(x);
			b -= k;
			b %= 127;;
			_changed[i] = char(b);
		};
		_plain = _changed;
	}
}