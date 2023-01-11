#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt;
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		cnt = 0;
		if (a == 0 && b == 0 && c == 0) {
			return 0;
		}

		if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
			cout << "right\n";
			cnt++;
			
		}
		if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
			cout << "right\n";
			cnt++;
	
		}
		if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
			cout << "right\n";
			cnt++;
		}

		if (cnt == 0) {
			cout << "wrong\n";
		}
	}
}
