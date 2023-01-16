#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>>sum(N + 1, vector<int>(N + 1, 0)); //구간 합

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
		}
	}
	
	int X1, Y1, X2, Y2;
	for (int j = 0; j < M; j++) {
		cin >> X1>> Y1>> X2 >> Y2;
		cout << sum[X2][Y2] - sum[X2][Y1 - 1] - sum[X1 - 1][Y2] + sum[X1 - 1][Y1 - 1] << "\n";
	}
}
