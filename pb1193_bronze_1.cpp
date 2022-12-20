#include <iostream>
using namespace std;

int main() {
	int div;
	int ed;
	int num;
	cin >> num;
	int i = 0;
	while (true) {
		i++;
		if (num <= i) {
			break;
		}
		num = num - i;
	} //i번째 대각선에 num번쨰 숫자
	if (i % 2 == 0) {
		ed = num;
		div = i + 1 - num;
	}
	else {
		ed = i + 1 - num;
		div = num;
	
	}
	cout << ed << "/" << div << endl;
}
