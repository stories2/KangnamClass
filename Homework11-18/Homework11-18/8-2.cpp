#include "Circle8-2.h"

NamedCircle findBigPizza(NamedCircle pizza[]);

int main() {
	NamedCircle pizza[5], big;
	int i;

	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;


	for (i = 0; i < 5; i += 1) {
		int radius;
		string name;
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	big = findBigPizza(pizza);
	cout << "가장 면적이 큰 피자는 " << big.getName() << "입니다" << endl;
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