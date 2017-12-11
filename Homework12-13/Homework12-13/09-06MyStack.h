#pragma once
#include "09-06AbstractStack.h"

class MyStack : public AbstractStack {
	int *stack;
	int size, stackPoint;
public :

	MyStack(int size) {
		this->size = size;
		stack = new int[size];
		stackPoint = 0;
	}

	bool push(int n) {
		if (stackPoint + 1 < size) {
			stack[stackPoint++] = n;
			return true;
		}
		return false;
	}

	bool pop(int& n) {
		if (stackPoint - 1 >= 0) {
			n = stack[--stackPoint];
			return true;
		}
		return false;
	}

	int size2();

	~MyStack();
};

int MyStack::size2() {
	return stackPoint;
}

MyStack::~MyStack() {
	delete[] stack;
}