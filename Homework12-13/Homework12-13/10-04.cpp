#include <iostream>

using namespace std;

template <class T>
bool search(T, T *, int);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) {
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl;
	}
	else {
		cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;
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