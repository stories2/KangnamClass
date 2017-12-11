#include <iostream>

using namespace std;

template <class T>
bool search(T, T *, int);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) {
		cout << "100이 배열 x에 포함되어 있다" << endl;
	}
	else {
		cout << "100이 배열 x에 포함되어 있지 않다" << endl;
	}
}

template <class T>
bool search(T target, T *arr, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		if (arr[i] == target) {
			return true;
		}
	}
	return false;
}