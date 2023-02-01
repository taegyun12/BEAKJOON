#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs) {
			return o1 > o2; //절대값이 같다면 작은 것(음수)이 우선
		}
		else {
			return first_abs > second_abs; //절대값이 다르다면 절대값이 작은 것이 우선
		}
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, compare> PQ;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a == 0) {
			if (PQ.empty()) {
				cout << "0\n";
			}
			else {
				cout << PQ.top() << "\n";
				PQ.pop();
			}
		}
		else {
			PQ.push(a);
		}
	}
}
