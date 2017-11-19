#pragma once
#include <iostream>

using namespace std;

class Matrix {
	int matrixArray[4];
public:
	Matrix(int i = 0, int t = 0, int q = 0, int itq = 0);
	void show();

	void operator >> (int targetMatrixArray[]) {
		int i;
		for (i = 0; i < 4; i += 1) {
			targetMatrixArray[i] = matrixArray[i];
		}
	}

	void operator << (int targetMatrixArray[]) {
		int i;
		for (i = 0; i < 4; i += 1) {
			matrixArray[i] = targetMatrixArray[i];
		}
	}
};

Matrix::Matrix(int i, int t, int q, int itq) {
	matrixArray[0] = i;
	matrixArray[1] = t;
	matrixArray[2] = q;
	matrixArray[3] = itq;
}

void Matrix::show() {
	cout << "Matrix = {";
	int i;
	for (i = 0; i < 4; i += 1) {
		cout << " " << matrixArray[i];
	}
	cout << " }" << endl;
}