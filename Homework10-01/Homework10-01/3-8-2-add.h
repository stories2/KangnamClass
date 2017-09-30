class Add {
	int a, b;
public:
	void setValue(int, int);
	int calculate();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

inline int Add::calculate() {
	return a + b;
}