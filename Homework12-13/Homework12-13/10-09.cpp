#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input, i, sum;
	double average;
	vector<int> stack;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> input;
		if (input == 0) {
			break;
		}
		stack.push_back(input);
		sum = 0;
		vector<int>::iterator it;
		for (it = stack.begin(); it != stack.end(); it += 1) {
			cout << *it << " ";
			sum = sum + *it;
		}
		cout << "\n��� = " << (double) sum / stack.size() << endl;
	}
}