#include <iostream>

using namespace std;

int get() throw (char *);

int main() {
	int a, b;
	while (true) {
		try {
			a = get();
			b = get();
			cout << "곱: " << a * b << endl;
		}
		catch (char *s) {
			cout << s << endl;
		}
	}
}

int get() {
	int data;
	cout << "0~9 사이의 정수 입력 >> ";
	cin >> data;
	cin.ignore(1);
	if (data < 0 || data > 9) {
		throw "input fault 예외 발생, 계산할 수 없음";
	}
	return data;
}