#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	int count = 0;
	cin >> N >> M;
	int* arr = new int[N];
	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}
	
	sort(arr, arr + N);

	int i = 0;
	int j = N - 1;

	while (i < j) {
		if (arr[i] + arr[j] > M) {
			j--;
		}
		else if (arr[i] + arr[j] < M) {
			i++;
		}
		else {
			count++;
			i++;
			j--;
		}
	}
	cout << count;
	delete[] arr;
}
