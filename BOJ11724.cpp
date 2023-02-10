#include <iostream>
#include <vector>
using namespace std;

static vector<vector<int>> adj_list;
static vector<bool> visited;
void DFS(int v);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	adj_list.resize(n + 1);
	visited = vector<bool>(n + 1, false);

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		adj_list[s].push_back(e);
		adj_list[e].push_back(s);
	}

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (visited[i] == false) {
			count++;
			DFS(i);
		}
	}
	cout << count;
}

void DFS(int v) {
	if (visited[v] == true) {
		return;
	}
	visited[v] = true;

	for (int i : adj_list[v]) {
		if (visited[i] == false) {
			DFS(i);
		}
	}
}
