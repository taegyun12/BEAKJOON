#include <iostream>
using namespace std;

int main() {
	int original[6] = { 1,1,2,2,2,8 };
	int num = 0;
	for (int i = 0; i < 6; i++) {
		cin >> num;
		original[i] = original[i] - num;
	}
	for (int i = 0; i < 6; i++) {
		cout << original[i] << " ";
	}

	return 0;
}
