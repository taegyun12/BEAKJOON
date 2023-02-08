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
	vector<int> tops;
	for (int i = 0; i < n; i++) {
		int h;
		cin >> h;
		tops.push_back(h);
	}
	
	stack<int> s;
	long long count = 0;
	
	for (int i = 0; i < n; i++) {
		int now = tops[i];
		while (!s.empty()) {
			if (now >= s.top()) {
				s.pop();
			}
			else {
				break;
			}
		}
		count += (long long)s.size();
		s.push(now);
	}

	cout << count;
}
