#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;

	string str;
	stack<char> S;

	bool test;
	for (int i = 0; i < n; i++) {
		cin >> str;
		test = true;
		while (!S.empty()) {
			S.pop();
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				S.push(str[i]);
			}
			else {
				if (S.empty()) {
					test = false;
					break;
				}
				else {
					S.pop();
				}
			}
		}
		if (!S.empty() || test == false) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
}
