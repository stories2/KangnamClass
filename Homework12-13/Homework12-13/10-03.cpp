#include <iostream>

using namespace std;

template <class T>
void reverseArray(T *, int);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i += 1) {
		cout << x[i] << " ";
	}
	cout << endl;
}

template <class T>
void reverseArray(T *arr, int size) {
	int temp, i;
	for (i = 0; i < size / 2; i += 1) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}