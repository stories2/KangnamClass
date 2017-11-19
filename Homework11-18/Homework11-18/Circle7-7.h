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

	friend Circle operator ++ (Circle &circle);
	friend Circle operator ++ (Circle &circle, int temp);
};

Circle operator ++ (Circle &circle) {
	circle.radius++;
	return circle;
}

Circle operator ++ (Circle &circle, int temp) {
	Circle circleBak = circle;
	circle.radius++;
	return circleBak;
}