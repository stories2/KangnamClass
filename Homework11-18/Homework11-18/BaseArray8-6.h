#pragma once
#include <iostream>

using namespace std;

class BaseArray {
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() {
		delete[] mem;
	}
	void put(int index, int val) {
		mem[index] = val;
	}
	int get(int index) {
		return mem[index];
	}
	int getCapacity() {
		return capacity;
	}
};

class MyStack : public BaseArray {
	int stackPoint;
public:
	MyStack(int capacity) : BaseArray(capacity) {
		stackPoint = 0;
	}

	void push(int data) {
		put(stackPoint++, data);
	}

	int capacity() {
		return getCapacity();
	}

	int length() {
		return stackPoint;
	}

	int pop() {
		return stackPoint - 1 >= 0 ? get(--stackPoint) : 0;
	}
};