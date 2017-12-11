#pragma once
#include "09-02Converter.h"

class KmToMile : public Converter {
public:
	KmToMile(double src) : Converter(src) {

	}

	double convert(double src) {
		return src / ratio;
	}

	string getSourceString() {
		return "km";
	}

	string getDestString() {
		return "mile";
	}
};