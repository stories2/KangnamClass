#include "Circle8-2.h"

NamedCircle findBigPizza(NamedCircle pizza[]);

int main() {
	NamedCircle pizza[5], big;
	int i;

	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;


	for (i = 0; i < 5; i += 1) {
		int radius;
		string name;
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	big = findBigPizza(pizza);
	cout << "���� ������ ū ���ڴ� " << big.getName() << "�Դϴ�" << endl;
}

NamedCircle findBigPizza(NamedCircle pizza[]) {
	NamedCircle big = pizza[0];
	int i;
	for (i = 0; i < 5; i += 1) {
		if (pizza[i].getArea() > big.getArea()) {
			big = pizza[i];
		}
	}
	return big;
}