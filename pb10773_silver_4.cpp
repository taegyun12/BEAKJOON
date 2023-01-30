#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	stack<int> myStack;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			myStack.pop();
		}
		else {
			myStack.push(temp);
		}
	}

	int result = 0;
	while (!myStack.empty()) {
		result += myStack.top();
		myStack.pop();
	}
	cout << result;
}
