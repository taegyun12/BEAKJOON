#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int N;
	cin >> N;
	int* arr = new int[N]; 
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int answer;
	cin >> answer;
	for (int j = 0; j < N; j++) {
		if (arr[j] == answer) {
			count++;
		}
	}
	cout << count << endl;
}
