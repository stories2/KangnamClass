#include "Person.h"

int main() {
	Person person[3];
	string search;
	int i;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (i = 0; i < 3; i += 1) {
		string temp[2];
		cout << "��� " << i + 1 << ">> ";
		cin >> temp[0];
		cin >> temp[1];
		person[i].set(temp[0], temp[1]);
	}

	cout << "��� ����� �̸��� ";
	for (i = 0; i < 3; i += 1) {
		cout << person[i].getName() << " ";
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> search;
	for (i = 0; i < 3; i += 1) {
		if (search == person[i].getName()) {
			cout << "��ȭ ��ȣ�� " << person[i].getTel() << endl;
			return 0;
		}
	}
	return 0;
}