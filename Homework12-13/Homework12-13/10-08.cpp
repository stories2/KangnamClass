#include "10-08Comparable.h"

using namespace std;

class Circle : public Comparable{
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}

	int getRadius() {
		return radius;
	}

	bool operator > (Circle &op2) {
		return radius > op2.radius;
	}

	bool operator < (Circle &op2) {
		return radius < op2.radius;
	}

	bool operator == (Circle &op2) {
		return radius == op2.radius;
	}
};

template <class T>
T bigger(T a, T b) {
	if (a > b) {
		return a;
	}
	return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}