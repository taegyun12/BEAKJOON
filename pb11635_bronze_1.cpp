#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int root_N = static_cast<int>(ceil(sqrt(N)));
	int i = 2;
	while (N != 1) {
		if (N % i == 0) {
			cout << i << " ";
			N /= i;
		}
		else {
			i++;
		}
	}
}
