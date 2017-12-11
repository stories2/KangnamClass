#pragma once
#include "09-07Shape.h"

class Triangular : public Shape {
public:
	Triangular(string name, int w, int h) : Shape(name, w, h) {

	}

	double getArea() {
		return width * height / 2;
	}
};