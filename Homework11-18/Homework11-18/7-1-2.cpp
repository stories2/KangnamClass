#include "Book7-1-2.h"

int main() {
	Book a("û��", 20000, 300),
		b("�̷�", 30000, 500);
	a += 500;
	b -= 500;

	a.show();
	b.show();
	return 0;
}