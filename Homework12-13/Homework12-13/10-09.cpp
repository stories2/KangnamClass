#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input, i, sum;
	double average;
	vector<int> stack;
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
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
		cout << "\n평균 = " << (double) sum / stack.size() << endl;
	}
}