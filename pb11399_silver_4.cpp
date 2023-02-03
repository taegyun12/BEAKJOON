#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} // 배열 완성

	for (int i = 1; i < n; i++) {
		int temp = arr[i];
		int j = 0;
		while (j <= i && arr[j] < arr[i]) {
			j++;
		}
		for (int k = i - 1; k >= j; k--) {
			arr[k + 1] = arr[k];
		}
		arr[j] = temp;
		
	}

	vector<int> sum(n, 0);
	sum[0] = arr[0];
	int result = sum[0];

	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + arr[i];
		result += sum[i];
	}
	cout << result;

}
