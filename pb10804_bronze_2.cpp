#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int arr[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	int a, b;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		while (a < b) {
			swap(arr[a], arr[b]);
			a++;
			b--;
		}
	}
	for (int i = 1; i < 21; i++) {
		cout << arr[i] << " ";
	}
}
