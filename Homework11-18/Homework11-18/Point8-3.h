#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
protected:
	void move(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class ColorPoint : public Point {
	string colorName;
public:
	ColorPoint(int x, int y, string colorName) : Point(x, y) {
		this->colorName = colorName;
	}

	void setColor(string colorName) {
		this->colorName = colorName;
	}

	void setPoint(int x, int y) {
		move(x, y);
	}

	void show() {
		cout << colorName << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다" << endl;
	}
};