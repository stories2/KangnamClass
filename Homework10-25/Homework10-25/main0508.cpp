#include "Book.h"

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	cpp.show();
	java.set("명품자바", 10000);
	java.show();
	return 0;
}