#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int tmp = N;
	for (int a = 0; a < N; a++) {
		for (int i = 0; i < tmp - 1; i++) {
			cout << " ";
		}
		for (int j = 0; j < (N * 2 - 1) - (2 * tmp - 2) ; j++) {
			cout << "*";
		}

		tmp--;
		cout << "\n";
	}
}
