#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int* arr = new int[N];
	int ans = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int obj;
	cin >> obj;
	
	int* occur = new int[obj]; 
	for (int j = 0; j < obj; j++) {
		occur[j] = 0;
	}
	
	for (int i = 0; i < N; i++) {
		if (obj >= arr[i]) {
			if (occur[obj - arr[i]]) {
				ans++;
			}
			occur[arr[i]] = 1;
		}
	}
	cout << ans;
}
