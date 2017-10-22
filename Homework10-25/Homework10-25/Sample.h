#pragma once
#include <iostream>

using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {

	int i;
	for (i = 0; i < size; i += 1) {
		cin >> p[i];
	}
}

void Sample::write() {
	int i;
	for (i = 0; i < size; i += 1) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big() {
	int max = p[0], i;
	for (i = 1; i <= this->size; i += 1) {
		if (max < p[i]) {
			max = p[i];
		}
	}
	return max;
}