#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int alpha[26] = {}; //0으로 초기화
	string test;
	cin >> test;
	for (auto a : test) {
		alpha[a - 'a']++;
	}
	/*for (char a : test) {
		alpha[a - 'a']++;
	}*/
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}
