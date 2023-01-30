#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int> arr(N, 0);
	vector<char> resultV;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	stack<int> myStack;
	int num = 1; 
	bool result = true;

	for (int i = 0; i < arr.size(); i++) {
		int now = arr[i];

		if (now >= num) {
			while (now >= num) {
				myStack.push(num++);
				resultV.push_back('+');
			}
			myStack.pop();
			resultV.push_back('-');
		}
		else {
			int n = myStack.top();
			myStack.pop();

			if (n > now) {
				cout << "NO";
				result = false;
				break;
			}
			else {
				resultV.push_back('-');
			}
		}
	}
	if (result) {
		for (int i = 0; i < resultV.size(); i++) {
			cout << resultV[i] << "\n";
		}
	}
}
