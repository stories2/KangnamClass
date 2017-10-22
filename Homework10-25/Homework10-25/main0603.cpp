#include <iostream>

using namespace std;

int big(int a, int b, int limit = 100) {
	int result = a;
	if (a < b) {
		result = b;
	}
	return result > limit ? limit : result;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}