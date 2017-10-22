#pragma once
#include <iostream>

using namespace std;

class MyVector {
	int *mem;
	int size;
public :
	MyVector(int n = 100, int val = 0);
	~MyVector() {
		delete[] mem;
	}
	void show() {
		cout << "size: " << size << " val: " << mem[0] << endl;
	}
};

MyVector::MyVector(int n, int val) {
	int i;

	mem = new int[n];
	size = n;

	for (i = 0; i < size; i += 1) {
		mem[i] = val;
	}
}