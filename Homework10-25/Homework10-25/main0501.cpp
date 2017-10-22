#include "Circle.h"

void swap(Circle &, Circle &);

int main() {
	Circle a, b;
	a.setRadius(5);
	b.setRadius(10);

	cout << "Before swap a : " << a.getArea() << " b: " << b.getArea() << endl;

	swap(a, b);

	cout << "After swap a: " << a.getArea() << " b: " << b.getArea() << endl;
	return 0;
}

void swap(Circle &a, Circle &b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}