#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	int max = -1;
	int n, m;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max <= arr[i][j]) {
				max = arr[i][j];
				n = i + 1;
				m = j + 1;
			}
		}
	}
	cout << max << "\n" << n << " " << m;
}
