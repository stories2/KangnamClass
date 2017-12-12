#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int i;
	cout << setw(15) << "Number" << setw(15) << "Square" << setw(15) << "Square Root" << endl;
	for (i = 0; i <= 45; i += 5) {
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << pow(i, 2);
		cout.precision(3);
		cout << setw(15) << setfill('_') << sqrt(i);
		cout.precision(0);
		cout << endl;
	}
}