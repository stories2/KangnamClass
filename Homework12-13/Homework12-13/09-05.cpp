#include "09-05ANDGate.h"
#include "09-05ORGate.h"
#include "09-05XORGate.h"

int main() {
	ANDGate and;
	ORGate or;
	XORGate xor;

	and.set(true, false);
	or.set(true, false);
	xor.set(true, false);

	cout.setf(ios::boolalpha);

	cout << and.operation() << endl;
	cout << or.operation() << endl;
	cout << xor.operation() << endl;
}