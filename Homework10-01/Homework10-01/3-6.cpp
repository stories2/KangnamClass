#include <iostream>
#include <string>

using namespace std;

class Integer {
	int integer;
	bool isInteger;
public :
	Integer(int);
	Integer(string);

	int get();
	void set(int);
	bool isEven();
};

Integer::Integer(int integer) {
	this->integer = integer;
	isInteger = true;
}

Integer::Integer(string integerString) {
	try {
		integer = stoi(integerString);
		isInteger = true;
	}
	catch (...) {
		isInteger = false;
	}
}

int Integer::get() {
	return integer;
}

void Integer::set(int integer) {
	this->integer = integer;
}

bool Integer::isEven() {
	return isInteger;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';

	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';

	cout << m.isEven();

	return 0;
}