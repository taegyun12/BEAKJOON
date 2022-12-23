#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;
	if (a <= b) {
		if (b - a <= 1) {
			cout << 0 << "\n";
		}
		else {
			cout << b - a - 1 << "\n";
			while (a < b - 1) {
				a += 1;
				cout << a << " ";
			}
		}
	}
	else {
		if (a - b <= 1) {
			cout << 0 << "\n";
		}
		else {
			cout << a - b - 1 << "\n";
			while (b < a - 1) {
				b += 1;
				cout << b << " ";
			}
		}
	}
	
}
