#include "Book7-2-1.h"

int main() {
	Book a("��ǰ C++", 30000, 500),
		b("��ǰ C++", 30000, 500);
	if (a == 30000) {
		cout << "���� 30000��" << endl;
	}
	if (a == "��ǰ C++") {
		cout << "��ǰ C++ �Դϴ�" << endl;
	}
	if (a == b) {
		cout << "�� å�� ���� å�Դϴ�" << endl;
	}
}