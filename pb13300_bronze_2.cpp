#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	int K;
	cin >> N >> K;
	int sex, grade;
	int ans = 0;
	
	int g_grade_arr[7] = {};
	int b_grade_arr[7] = {};
	for (int i = 0; i < N; i++) {
		cin >> sex >> grade;
		if (sex == 0) {
			g_grade_arr[grade]++;
		}
		else {
			b_grade_arr[grade]++;
		}
	}
	
	for (int i = 1; i < 7; i++) {
		ans += ceil(static_cast<double>(g_grade_arr[i]) / K) + ceil(static_cast<double>(b_grade_arr[i]) / K);
	}
	cout << ans;
}
