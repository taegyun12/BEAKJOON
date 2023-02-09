#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int j = 0; j < n; j++) {
		cout << arr[j] << "\n";
	}
}


//Merge Sort를 이용한 풀이
#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int s, int e);
static vector<int> arr;
static vector<int> tmp;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	arr = vector<int>(n + 1.0); //벡터 초기화
	tmp = vector<int>(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	mergeSort(1, n);

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << "\n";
	}
}

void mergeSort(int s, int e) { // Merge Sort 병합정렬
	if (e - s < 1) {
		return; //원소가 하나일 떄 return :: basis case
	}
	
	int median = s + (e - s) / 2; //중앙값 median 설정
	mergeSort(s, median); //중앙값 기준 앞부분을 재귀적으로 다 정렬 완료
	mergeSort(median + 1, e); //중앙값 기준 뒷부분을 재귀적으로 다 정렬 완료

	for (int i = s; i <= e; i++) { //idx1, idx2를 움직여가며 정렬시킬 tmep 배열을 기존의 배열을 복사해서 만듬
		tmp[i] = arr[i];
	}

	int k = s; //원본 배열에서 값을 넣을 자리(시작 지점부터)
	int idx1 = s; //tmp 배열에서 움직일 idx1
	int idx2 = median + 1; //tmp 배열에서 움직일 idx2

	while (idx1 <= median && idx2 <= e) {
		if (tmp[idx1] > tmp[idx2]) {
			arr[k] = tmp[idx2];
			k++;
			idx2++;
		}
		else {
			arr[k] = tmp[idx1];
			k++;
			idx1++;
		}
	}
	//한쪽 그룹이 모두 선택된 후 남아있는 쪽의 값 정리하기
	while (idx1 <= median) {
		arr[k] = tmp[idx1];
		k++;
		idx1++;
	}

	while (idx2 <= e) {
		arr[k] = tmp[idx2];
		k++;
		idx2++;
	}
}
