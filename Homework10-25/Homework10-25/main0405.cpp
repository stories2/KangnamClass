#include "Circle.h"

#define CUT_LINE 100

int main() {
	Circle circle[3];
	int i, overCutLine = 0;
	for (i = 0; i < 3; i += 1) {
		int radius;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > CUT_LINE) {
			overCutLine += 1;
		}
	}
	cout << "면적이 " << CUT_LINE << "보다 큰 원은 " << overCutLine << "개 입니다." << endl;
	return 0;
}