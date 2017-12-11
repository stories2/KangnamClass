#include "09-06MyStack.h"

int main() {
	MyStack stack(10);

	int popIndex;

	stack.push(1);

	cout << "size: " << stack.size2() << endl;

	stack.pop(popIndex);

	cout << "pop: " << popIndex << endl;
}