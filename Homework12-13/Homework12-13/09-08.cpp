#include "09-08Oval.h"
#include "09-08Rect.h"
#include "09-08Triangular.h"

int main() {
	Shape *p[3];
	int i;

	p[0] = new Oval("ºó´ë¶±", 10, 20);
	p[1] = new Rect("Âû¶±", 30, 40);
	p[2] = new Triangular("Åä½ºÆ®", 30, 40);

	for (i = 0; i < 3; i += 1) {
		cout << p[i]->getName() << " ³ÐÀÌ´Â " << p[i]->getArea() << endl;
		delete p[i];
	}
}