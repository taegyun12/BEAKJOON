#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	long count = 0;
	cin >> N >> M;
	
	vector<long> sum(N + 1, 0);
	vector<long> remainderCount(M, 0);

	int temp, remainder;

	for (int i = 1; i <= N; i++) {
		cin >> temp;
		sum[i] = sum[i - 1] + temp;
	} //구간 합 배열 완성


	for (int j = 1; j <= N; j++) {
		remainder = sum[j] % M;
		if (remainder == 0) {
			count++;
		}
		remainderCount[remainder]++;
	}

	for (int h = 0; h < M; h++) {
		if (remainderCount[h] > 1) {
			count += ((remainderCount[h] * (remainderCount[h] - 1)) / 2); //combination 
		}
	}

	cout << count;

}
