#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[100][100] = {};
	int N, x, y;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		int xcnt = 0;
		while (xcnt < 10 && x < 100) {
			int ycnt = 0;
			while (ycnt < 10 && y < 100) {
				arr[x + xcnt][y + ycnt] = 1;
				ycnt++;
			}
			xcnt++;
		}
	}
	int res = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			res += arr[i][j];
		}
	}
	cout << res;
}
