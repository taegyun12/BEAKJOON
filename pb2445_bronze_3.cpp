#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		for (int k = 0; k < 2 * N - 2 - i * 2; k++) {
			cout << " ";
		}
		for (int h = 0; h < i + 1; h++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			cout << "*";
		}
		for (int k = 0; k < 2 * (i + 1); k++) {
			cout << " ";
		}
		for (int h = 0; h < N - 1 - i; h++) {
			cout << "*";
		}
		cout << "\n";
	}
}
