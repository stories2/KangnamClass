#pragma once
#include "09-05AbstractGate.h"

class ANDGate : public AbstractGate {
public:
	bool operation() {
		return x & y;
	}
};