#pragma once
#include <iostream>

using namespace std;

class Circle;

class Comparable {
public:
	virtual bool operator > (Circle &op2) = 0;
	virtual bool operator < (Circle &op2) = 0;
	virtual bool operator ==(Circle &op2) = 0;
};