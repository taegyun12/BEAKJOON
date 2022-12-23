#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	int time;
	int totalM = 0;
	int totalY = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> time;
		totalY += 10 * (time / 30 + 1);

		totalM += 15 * (time / 60 + 1);
	}
	if (totalM < totalY) {
		cout << "M " << totalM;
	}
	else if (totalM > totalY) {
		cout << "Y " << totalY;
	}
	else{
		cout << "Y M " << totalM;
	}
}
