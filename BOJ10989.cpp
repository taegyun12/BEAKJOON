#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int n;
	cin >> n;
	vector<int> count(10001, 0);
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		count[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}
