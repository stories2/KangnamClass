#include "09-08Oval.h"
#include "09-08Rect.h"
#include "09-08Triangular.h"

int main() {
	Shape *p[3];
	int i;

	p[0] = new Oval("��붱", 10, 20);
	p[1] = new Rect("����", 30, 40);
	p[2] = new Triangular("�佺Ʈ", 30, 40);

	for (i = 0; i < 3; i += 1) {
		cout << p[i]->getName() << " ���̴� " << p[i]->getArea() << endl;
		delete p[i];
	}
}