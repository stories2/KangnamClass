#include "Book7-4.h"

int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	}
}