#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int arr[5];
	int mean = 0;
	int tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		mean += tmp;
		arr[i] = tmp;
	}
	sort(arr, arr + 5);
	cout << mean / 5 << "\n" << arr[2];
}
