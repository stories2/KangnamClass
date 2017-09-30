#include <iostream>

#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'

using namespace std;

class Add {
	int a, b;
public :
	void setValue(int, int);
	int calculate();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Add::calculate() {
	return a + b;
}

class Sub {
	int a, b;
public :
	void setValue(int, int);
	int calculate();
};

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Sub::calculate() {
	return a - b;
}

class Mul {
	int a, b;
public :
	void setValue(int, int);
	int calculate();
};

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Mul::calculate() {
	return a * b;
}

class Div {
	int a, b;
public :
	void setValue(int, int);
	int calculate();
};

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Div::calculate() {
	return b == 0 ? 0 : a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int firstInput, secondInput, result;
	char operatorChar = '\0';

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";

		cin >> firstInput >> secondInput >> operatorChar;

		switch (operatorChar) {
		case ADD:
			a.setValue(firstInput, secondInput);
			result = a.calculate();
			break;
		case SUB:
			s.setValue(firstInput, secondInput);
			result = s.calculate();
			break;
		case MUL:
			m.setValue(firstInput, secondInput);
			result = m.calculate();
			break;
		case DIV:
			d.setValue(firstInput, secondInput);
			result = d.calculate();
			break;
		}
		cout << result << endl;
	}

	return 0;
}