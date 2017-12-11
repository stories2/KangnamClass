#pragma once
#include "09-04LoopAdder.h"

class DoWhileLoopAdder : public LoopAdder {
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {

	}

	int calculate() {
		int index = getX(), sum = 0;
		do {
			sum = sum + index;
			index = index + 1;
		} while (index <= getY());
		return sum;
	}
};