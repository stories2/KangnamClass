#include <iostream>

using namespace std;

int WhoIsBigger(int, int);

int main() {

	int firstInput, secondInput, result;

	cout << "�� ���� �Է��϶�>>";

	cin >> firstInput >> secondInput;

	result = WhoIsBigger(firstInput, secondInput);

	cout << "ū �� = " << result << endl;

	return 0;
}

int WhoIsBigger(int a, int b) {
	return a > b ? a : b;
}