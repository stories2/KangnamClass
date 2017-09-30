class Div {
	int a, b;
public:
	void setValue(int, int);
	int calculate();
};

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Div::calculate() {
	return b == 0 ? 0 : a / b;
}