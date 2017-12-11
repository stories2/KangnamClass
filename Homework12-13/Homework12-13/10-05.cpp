#include <iostream>

using namespace std;

template <class T>
T * concat(T[], int, T[], int);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	int *z;
	int i;
	z = concat(x, 5, y, 5);
	for (i = 0; i < 10; i += 1) {
		cout << z[i] << " ";
	}
	cout << endl;
}

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T *c = new T[sizea + sizeb];
	int i;
	for (i = 0; i < sizea; i += 1) {
		c[i] = a[i];
	}
	for (i = sizea; i < sizea + sizeb; i += 1) {
		c[i] = b[i - sizea];
	}
	return c;
}