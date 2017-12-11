#pragma once
#include <iostream>

using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int &n) = 0;
	virtual int size2() = 0;
};