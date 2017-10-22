#pragma once
#include <iostream>

using namespace std;

class MyVector {
	int *mem;
	int size;
public :
	MyVector(int n, int val);
	~MyVector() {
		delete[] mem;
	}
};

MyVector::MyVector(int n = 100, int val = 0) {
	int i;

	mem = new int[100];
	size = n;

	for (i = 0; i < size; i += 1) {
		mem[i] = val;
	}
}