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

class MyQueue : public BaseArray {
	int front, rear;
public:
	MyQueue(int capacity) : BaseArray(capacity) {
		front = 0;
		rear = 0;
	}

	void enqueue(int data) {
		put(front++, data);
	}

	int capacity() {
		return getCapacity();
	}

	int length() {
		return front - rear;
	}

	int dequeue() {
		return get(rear++);
	}
};