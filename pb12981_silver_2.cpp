#include <iostream>
#include <string>
using namespace std;

int DNA[4];
int myDNA[4];
int checkNum;
void Add(char c);
void Remove(char c);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int stringSize, testSize;
	cin >> stringSize >> testSize;

	int result = 0;

	string text;
	cin >> text;


	for (int k = 0; k < 4; k++) {
		cin >> DNA[k];
		if (DNA[k] == 0) { //0이면 바로 조건 만족이므로 바로 checkNum++ 
			checkNum++;
		}
	}
	
	//초기 window에 대한 처리
	for (int i = 0; i < testSize; i++) {
		Add(text[i]);
	}
	if (checkNum == 4) {
		result++;
	}

	for (int i = testSize; i < stringSize; i++) {
		int j = i - testSize;
		Add(text[i]);
		Remove(text[j]);

		if (checkNum == 4) {
			result++;
		}
	}
	cout << result;
}

void Add(char c) {
	switch (c) {
	case 'A':
		myDNA[0]++;
		if (myDNA[0] == DNA[0]) {
			checkNum++;
		}
		break;
	case 'C':
		myDNA[1]++;
		if (myDNA[1] == DNA[1]) {
			checkNum++;
		}
		break;
	case 'G':
		myDNA[2]++;
		if (myDNA[2] == DNA[2]) {
			checkNum++;
		}
		break;
	case 'T':
		myDNA[3]++;
		if (myDNA[3] == DNA[3]) {
			checkNum++;
		}
		break;
	}
}
