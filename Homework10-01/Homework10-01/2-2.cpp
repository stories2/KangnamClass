#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i, t;

	for (i = 1; i <= 9; i += 1) {
		for (t = 1; t <= 9; t += 1) {
			cout << t << "X" << i << "=" << setw(2) << i * t << " ";
		}
		cout << endl;
	}

	return 0;
}