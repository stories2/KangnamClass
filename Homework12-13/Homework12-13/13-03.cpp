#include <iostream>

using namespace std;

int get() throw (char *);

int main() {
	int a, b;
	while (true) {
		try {
			a = get();
			b = get();
			cout << "��: " << a * b << endl;
		}
		catch (char *s) {
			cout << s << endl;
		}
	}
}

int get() {
	int data;
	cout << "0~9 ������ ���� �Է� >> ";
	cin >> data;
	cin.ignore(1);
	if (data < 0 || data > 9) {
		throw "input fault ���� �߻�, ����� �� ����";
	}
	return data;
}