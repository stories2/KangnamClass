#include <iostream>

using namespace std;

int main() {
	int input, sum = 0;
	while ((input = cin.get()) != EOF) {
		if (input == 'a') {
			sum += 1;
		}
		if (input == '\n') {
			break;
		}
	}
	cout << "a: " << sum << endl;
}