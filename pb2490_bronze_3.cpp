#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); // cout과 printf 사이 동기화 해제 -> 대신 이제부터 cout 만 사용 가능
	cin.tie(nullptr);//cin과 cout 사이 버퍼 비우기 해제
	int tmp;
	for (int j = 0; j < 3; j++){
		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			cin >> tmp;
			if (tmp == 0) {
				cnt++;
			}
		}
		if (cnt == 1) {
			cout << "A\n";
		}
		else if (cnt == 2) {
			cout << "B\n";
		}
		else if (cnt == 3) {
			cout << "C\n";
		}
		else if (cnt == 4) {
			cout << "D\n";
		}
		else {
			cout << "E\n";
		}
	}
	
}
