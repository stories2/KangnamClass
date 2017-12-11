#include "09-04WhileLoopAdder.h"
#include "09-04DoWhileLoopAdder.h"

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}