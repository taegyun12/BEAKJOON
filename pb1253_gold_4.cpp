#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	long* arr = new long[N];
	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}

	sort(arr, arr + N);

	int count = 0;

	for (int k = 0; k < N; k++) {
		long find = arr[k];
		int i = 0;
		int j = N - 1;

		while (i < j) {
			if (arr[i] + arr[j] == find) {
				if (i != k && j != k) {
					count++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (arr[i] + arr[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << count;
	delete[] arr;
}
