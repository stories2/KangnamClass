#include "Book.h"

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	cpp.show();
	java.set("��ǰ�ڹ�", 10000);
	java.show();
	return 0;
}