#include <iostream>
using namespace std;

int main() {
	int arr[31] = { 0 };
	int tmp;
	for (int i = 1; i <= 30; i++) {
		cin >> tmp;
		arr[tmp]++;
	}
	for (int j = 1; j <= 30; j++) {
		if (arr[j] == 0) {
			cout << j << endl;
		}
	}

}
