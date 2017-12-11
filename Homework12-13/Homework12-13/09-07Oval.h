#pragma once
#include "09-07Shape.h"
#define PI 3.14

class Oval : public Shape {
public:
	Oval(string name, int w, int h) : Shape(name, w, h) {

	}

	double getArea() {
		return width * height * PI;
	}
};