#pragma once
#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) {
		radius = r;
	}
	void setRadius(int r) {
		radius = r;
	}
	int getRadius() {
		return radius;
	}
	void show() {
		cout << "�������� " << radius << "�� ��" << endl;
	}
};