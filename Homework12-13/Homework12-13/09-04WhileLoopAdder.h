#pragma once
#include "09-04LoopAdder.h"

class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) : LoopAdder(name) {

	}

	int calculate() {
		int index = getX(), sum = 0;
		while (index <= getY()) {
			sum = sum + index;
			index = index + 1;
		}
		return sum;
	}
};