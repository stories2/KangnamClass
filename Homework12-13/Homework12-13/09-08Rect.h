#pragma once
#include "09-08Shape.h"

class Rect : public Shape {
public:
	Rect(string name, int w, int h) : Shape(name, w, h) {

	}

	double getArea() {
		return width * height;
	}
};