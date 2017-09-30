#include "3-8-2.h"

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