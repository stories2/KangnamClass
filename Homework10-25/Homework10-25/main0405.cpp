#include "Circle.h"

#define CUT_LINE 100

int main() {
	Circle circle[3];
	int i, overCutLine = 0;
	for (i = 0; i < 3; i += 1) {
		int radius;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > CUT_LINE) {
			overCutLine += 1;
		}
	}
	cout << "������ " << CUT_LINE << "���� ū ���� " << overCutLine << "�� �Դϴ�." << endl;
	return 0;
}