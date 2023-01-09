#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, v;
	cin >> a >> b >> v;
	int result = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) {
		result++;
	}
	cout << result;
}
