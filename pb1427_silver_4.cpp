#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	vector<int> arr(str.size(), 0);

	for (int i = 0; i < str.size(); i++) {
		arr[i] = stoi(str.substr(i, 1));
	}

	for (int i = 0; i < str.length(); i++) {
		int max = i;
		for (int j = i + 1; j < str.length(); j++) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}
		if (arr[i] < arr[max]) {
			int temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
	}
}
