#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		vector<int> f(n + 1, 0);
		for (int j = 1; j <= n; j++) {
			f[j] = j;
		}
		int floorCount = 0;
		while (floorCount != k) {
			for (int k = 2; k <= n; k++) {
				f[k] = f[k] + f[k - 1];
			}
			floorCount++;
		}
		cout << f[n] << "\n";
	}
}
