#include <iostream>

#define ERROR_ARRAY_NULL 0
#define ERROR_SIZE_FAULT 1
#define ERROR_MEMORY_FAILURE 2

using namespace std;

int * concat(int a[], int sizea, int b[], int sizeb);

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	int y[] = { 10, 20, 30, 40};

	try {
		int *p = concat(x, 5, y, 4);

		for (int n = 0; n < 9; n += 1) {
			cout << p[n] << ' ';
		}
		cout << endl;
		delete[] p;

	}
	catch (int failCode) {
		cout << "오류코드 : " << failCode << endl;
	}
}

int * concat(int a[], int sizea, int b[], int sizeb) {
	if (a == NULL || b == NULL) {
		throw ERROR_ARRAY_NULL;
	}
	if (sizea <= 0 || sizeb <= 0) {
		throw ERROR_SIZE_FAULT;
	}
	int *c = new int[sizea + sizeb];
	if (c == NULL) {
		throw ERROR_MEMORY_FAILURE;
	}
	int i;
	for (i = 0; i < sizea; i += 1) {
		c[i] = a[i];
	}
	for (i = sizea; i < sizea + sizeb; i += 1) {
		c[i] = b[i - sizea];
	}
	return c;
}