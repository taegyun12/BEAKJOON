#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	string str;
	int temp;
	stack<int> myStack;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> temp;
			myStack.push(temp);
		}
		else if (str == "pop") {
			if (myStack.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << myStack.top() << "\n";
				myStack.pop();
			}
		}
		else if (str == "size") {
			cout << myStack.size() << "\n";
		}
		else if (str == "empty") {
			if (myStack.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else {
			if (myStack.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << myStack.top() << "\n";
			}
		}
	}
}
