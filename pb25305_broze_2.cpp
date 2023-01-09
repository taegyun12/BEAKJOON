#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());

	cout << arr[k - 1];

	delete[] arr;
}
