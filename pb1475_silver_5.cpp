#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int max = -1;
	int arr[10] = {};
	while (N > 0) {
		arr[N % 10]++;
		N /= 10;
	}
	arr[9] = ceil((static_cast<double>(arr[6]) + arr[9]) / 2);
	for (int i = 0; i < 10; i++) {
		if (i == 6) {
			continue;
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
}
