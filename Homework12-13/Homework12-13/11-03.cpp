#include <iostream>

using namespace std;

int main() {
	int input, index = 0;
	char str[20] = { '\0', };
	bool write = false;
	while (true) {
		input = cin.get();
		if (input == EOF) {
			break;
		}
		if (input == '\n') {
			write = false;
			cout << str << endl;
			cin.ignore(1);
		}
		if (write) {
			str[index] = input;
			index = index + 1;
		}
		if (input == ';') {
			write = true;
			index = 0;
		}
	}
}