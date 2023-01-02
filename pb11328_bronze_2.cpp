#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	string a, b;
	char arrA[26] = {};
	char arrB[26] = {};
	int count;
	cin >> N;
	for (int i = 0; i < N; i++) {
		count = 0;
		for (int k = 0; k < 26; k++) {
			arrA[k] = arrB[k] = 0;
		}
		cin >> a >> b;
		for (auto ch : a) {
			arrA[ch - 'a']++;
		}
		for (auto ch : b) {
			arrB[ch - 'a']++;
		}
		for (int j = 0; j < 26; j++) {
			if (arrA[j] != arrB[j]) {
				count++;
			}
		}
		if (count == 0) {
			cout << "Possible\n";
		}
		else {
			cout << "Impossible\n";
		}
	}
	
}
