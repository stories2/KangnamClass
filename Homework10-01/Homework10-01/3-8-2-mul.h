class Mul {
	int a, b;
public:
	void setValue(int, int);
	int calculate();
};

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Mul::calculate() {
	return a * b;
}