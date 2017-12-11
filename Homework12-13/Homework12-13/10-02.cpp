#include <iostream>

using namespace std;

template <class T>
bool equalArrays(T, T, int);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };

	if (equalArrays(x, y, 5)) {
		cout << "같다" << endl;
	}
	else {
		cout << "다르다" << endl;
	}
}

template <class T>
bool equalArrays(T x, T y, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		if (x[i] != y[i]) {
			return false;
		}
	}
	return true;
}