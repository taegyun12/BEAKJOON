#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * N - 2 * i - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 2 - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 3; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}
