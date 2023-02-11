#include <iostream>
#include <vector>
using namespace std;

void DFS(int now, int depth);
static vector<vector<int>> adj_list;
bool arrive = false;
static vector<bool> visited;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	arrive = false;
	cin >> n >> m;
	adj_list.resize(n);
	visited = vector<bool>(n, false);

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		adj_list[s].push_back(e);
		adj_list[e].push_back(s);
	}

	for (int i = 0; i < n; i++) {
		DFS(i, 1);
		if (arrive) {
			break;
		}
	}

	if (arrive) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}

void DFS(int now, int depth) {
	if (depth == 5 || arrive) {
		arrive = true;
		return;
	}
	visited[now] = true;
	for (int i : adj_list[now]) {
		if (visited[i] == false) {
			DFS(i, depth + 1);
		}
	}
	visited[now] = false;
}
