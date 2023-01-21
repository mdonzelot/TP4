#include "Cesar.h"

void Cesar::encode() {
	_changed.resize(_plain.size());
	std::cout << "Choississez le decalage" << std::endl;
	int k;
	std::cin >> k;
	for (int i = 0; i != _plain.size(); i++) {
		char(x) = _plain[i];
		if (char(x) == 32) {
			_changed[i] = char(32);
		}
		else if (char(x) == 10)
			_changed[i] = char(10);
		else{
			int b = int(x) - 97;
			b += k;
			b %= 26;
			b += 97;
			_changed[i] = char(b);
		};
		_cypher = _changed;
	}
}

void Cesar::decode() {
	_changed.resize(_cypher.size());
	std::cout << "Choississez le decalage" << std::endl;
	int k;
	std:: cin >> k;
	for (int i = 0; i != _cypher.size(); i++) {
		char(x) = _cypher[i];
		if (char(x) == 32) {
			_changed[i] = char(32);
		}
		else if (char(x) == 10)
			_changed[i] = char(10);
		else {
			int b = int(x) - 97;
			b -= k;
			b %= 26;
			b += 97;
			_changed[i] = char(b);
		};
		_plain = _changed;
	}
}
