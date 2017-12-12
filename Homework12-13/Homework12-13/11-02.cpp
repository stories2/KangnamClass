#include <iostream>

using namespace std;

int main() {
	char str[10] = { '\0', };
	int i, sum = 0;
	cin.get(str, 10);
	for (i = 0; i < 10; i += 1) {
		if (str[i] == ' ') {
			sum += 1;
		}
	}
	cout << sum << endl;
}