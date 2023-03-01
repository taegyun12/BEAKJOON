#include <iostream>
#include <queue>
using namespace std;

static int dx[] = { 0,1,0,-1 };
static int dy[] = { 1,0,-1,0 };
static int arr[101][101];
static bool visited[101][101] = { false };
static int n, m;
void BFS(int i, int j);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j] - '0';		
		}
	} //arr 완성

	BFS(0, 0);
	cout << arr[n - 1][m - 1];
}

void BFS(int i, int j) {
	queue<pair<int, int>> myQ; // for BFS
	myQ.push(make_pair(i, j)); //첫번째 요소를 넣고 시작

	while (!myQ.empty()) {
		int now[2];
		now[0] = myQ.front().first;
		now[1] = myQ.front().second;
		myQ.pop();
		visited[i][j] = true;

		for (int k = 0; k < 4; k++) {
			int x = now[0] + dx[k];
			int y = now[1] + dy[k];
			if (x >= 0 && y >= 0 && x < n && y < m) {
				if (arr[x][y] != 0 && !visited[x][y]) {
					visited[x][y] = true;
					arr[x][y] = arr[now[0]][now[1]] + 1;
					myQ.push(make_pair(x, y));
				}
			}
		}
	}
}
