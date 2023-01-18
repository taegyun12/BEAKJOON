#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int count = 1;


	int sum = 1;
	int startIdx = 1;
	int endIdx = 1;
	while (endIdx != N) {
		if (sum < N) {
			endIdx++;
			sum += endIdx;
		}
		else if (sum > N) {
			sum -= startIdx;
			startIdx++;
		}
		else {
			count++;
			endIdx++;
			sum += endIdx;
		}
	}
	cout << count;

}
