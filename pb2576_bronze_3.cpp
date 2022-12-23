#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //printf 와 cout 동기화 해제 -> cout만 사용 가능
	cin.tie(nullptr);//cout 과 cin 의 동기화 해제
	int tmp;
	int sum = 0;
	int min = 101;
	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2 != 0) {
			if (tmp < min) {
				min = tmp;
			}
			sum += tmp;
		}
	}
	if (sum == 0) {
		cout << -1<<"\n";
	}
	else {
		cout << sum << "\n";
		cout << min << "\n";
	}
}
