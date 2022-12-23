#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int arr[9];
	int sum = 0;
	int i, j;
	for (int a = 0; a < 9; a++) {
		cin >> arr[a];
		sum += arr[a];
	}
	sort(arr, arr + 9);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				goto point;
			}
		}
	}
	point:
	for (int k = 0; k < 9; k++) {
		if (k == i || k == j) {
			continue;
		}
		cout << arr[k] << "\n";
	}
}
