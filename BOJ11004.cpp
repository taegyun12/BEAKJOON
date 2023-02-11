#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &arr, int s, int e, int k);
int partition(vector<int>& arr, int s, int e);
void swap(vector<int>& arr, int i, int j);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} //배열 완성

	quickSort(arr, 0, n - 1, k - 1);
	cout << arr[k - 1];

}

void quickSort(vector<int>& arr, int s, int e, int k) {
	int pivot = partition(arr, s, e);
	if (pivot == k) {
		return;
	}
	else if (pivot > k) {
		quickSort(arr, s, pivot - 1, k);
	}
	else {
		quickSort(arr, pivot + 1, e, k);
	}
}

int partition(vector<int>& arr, int s, int e) {
	if (s + 1 == e) { //원소가 2개밖에 없을 시 
		if (arr[s] > arr[e]) {
			swap(arr, s, e);
		}
		return e;
	}
	int median = (s + e) / 2;
	swap(arr, s, median);
	int pivot = arr[s];
	int i = s + 1;
	int j = e;

	while (i <= j) {
		while (pivot < arr[j] && j>0) {
			j--;
		}
		while (pivot > arr[i] && i < arr.size() - 1) {
			i++;
		}
		if (i <= j) {
			swap(arr, i, j);
			i++;
			j--;
		}
	}
	arr[s] = arr[j];
	arr[j] = pivot;
	return j;
}

void swap(vector<int>& arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
