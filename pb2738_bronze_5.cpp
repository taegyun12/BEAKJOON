#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	int** arr1 = new int* [N];
	for (int i = 0; i < N; i++) {
		arr1[i] = new int[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr1[i][j];
		}
	}

	int** arr2 = new int* [N];
	for (int i = 0; i < N; i++) {
		arr2[i] = new int[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr1[i][j] + arr2[i][j] << " ";
		}
		cout << "\n";
	}

}
