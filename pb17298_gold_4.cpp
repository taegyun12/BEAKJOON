#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> arr(n, 0);
	vector<int> ans(n, 0);

	stack<int> s;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < n; j++) {
		while (!s.empty() && arr[j] > arr[s.top()]) {
			int tmp = s.top();
			s.pop();
			ans[tmp] = arr[j];
		}
		s.push(j);
	}
	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
}
