#pragma once
#include "09-05AbstractGate.h"

class XORGate : public AbstractGate {
public:
	bool operation() {
		return x ^ y;
	}
};