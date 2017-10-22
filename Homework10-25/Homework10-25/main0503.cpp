#include "CIrcle0503.h"

void increaseBy(Circle &, Circle);

int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
	return 0;
}

void increaseBy(Circle &a, Circle b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}