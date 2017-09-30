class Sub {
	int a, b;
public:
	void setValue(int, int);
	int calculate();
};

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Sub::calculate() {
	return a - b;
}