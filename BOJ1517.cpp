#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int s, int e);
static vector<int> arr;
static vector<int> temp;
static long result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	arr = vector<int>(n + 1, 0);
	temp = vector<int>(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	result = 0;
	mergeSort(1, n);
	cout << result;
}

void mergeSort(int s, int e) {
	if (e - s < 1) {
		return;
	}

	int median = s + (e - s) / 2;
	mergeSort(s, median);
	mergeSort(median + 1, e);

	for (int i = s; i <= e; i++) {
		temp[i] = arr[i];
	}

	int k = s;
	int idx1 = s;
	int idx2 = median + 1;

	while (idx1 <= median && idx2 <= e) {
		if (temp[idx1] > temp[idx2]) {
			arr[k] = temp[idx2];
			result += (idx2 - k);
			k++;
			idx2++;
		}
		else {
			arr[k] = temp[idx1];
			k++;
			idx1++;
		}
	}
	
	while (idx1 <= median) {
		arr[k] = temp[idx1];
		k++;
		idx1++;
	}
	while (idx2 <= e) {
		arr[k] = temp[idx2];
		k++;
		idx2++;
	}
}
