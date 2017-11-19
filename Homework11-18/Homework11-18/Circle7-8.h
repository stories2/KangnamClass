#pragma once
#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	void show() {
		cout << "radius = " << radius << " ÀÎ ¿ø" << endl;
	}

	friend Circle operator + (int temp, Circle &circle);
};

Circle operator + (int temp, Circle &circle) {
	return temp + circle.radius;
}