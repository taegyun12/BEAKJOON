#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	int* sum = new int[N + 1];
	
	sum[0] = 0;
	int temp;
	for (int h = 1; h <= N; h++) {
		cin >> temp;
		sum[h] = sum[h - 1] + temp;
	}

	int i, j;

	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		cout << sum[j] - sum[i - 1] << "\n";
	}

	delete[] sum;
}
