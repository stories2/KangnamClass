#include <iostream>

using namespace std;

int sum(int a, int b);

int main() {
	try {
		cout << sum(2, 5) << endl;
		cout << sum(-1, 5) << endl;
	}
	catch (char *s) {
		cout << s << endl;
	}
}

int sum(int a, int b) {
	int i, sum = 0;
	
	if (a > b) {
		throw "�߸��� �Է�";
	}
	if (a < 0 || b < 0) {
		throw "���� ó�� �� ��";
	}
	
	for (i = a; i <= b; i += 1) {
		sum = sum + i;
	}

	return sum;
}