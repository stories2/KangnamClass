#include <iostream>

using namespace std;

int WhoIsBigger(int, int);

int main() {

	int firstInput, secondInput, result;

	cout << "두 수를 입력하라>>";

	cin >> firstInput >> secondInput;

	result = WhoIsBigger(firstInput, secondInput);

	cout << "큰 수 = " << result << endl;

	return 0;
}

int WhoIsBigger(int a, int b) {
	return a > b ? a : b;
}