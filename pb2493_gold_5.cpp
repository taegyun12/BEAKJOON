#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> arr(n + 1, 0);
	vector<int> ans(n + 1, 0);

	stack<int> S;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	S.push(0);

	for (int j = 1; j <= n; j++) {
		while (!S.empty() && arr[j] > arr[S.top()]) {
			S.pop();
		}
		if (S.empty()) {
			ans[j] = 0;
		}
		else {
			ans[j] = S.top();
		}
		S.push(j);
	}
	
	for (int k = 1; k <= n; k++) {
		cout << ans[k] << " ";
	}
}
