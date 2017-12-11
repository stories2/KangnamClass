#pragma once
#include "09-05AbstractGate.h"

class ORGate : public AbstractGate {
public:
	bool operation() {
		return x | y;
	}
};