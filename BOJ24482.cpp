#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static vector<vector<int>> adj_list;
static vector<bool> visited;
int cnt = 1;
void DFS(int now, int depth);
static vector<int> depths;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, start;
	cin >> n >> m >> start;

	adj_list.resize(n + 1);
	visited = vector<bool>(n + 1, false);
	depths = vector<int>(n + 1, -1);
	for (int i = 1; i <= m; i++) {
		int s, e;
		cin >> s >> e;
		adj_list[s].push_back(e);
		adj_list[e].push_back(s);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj_list[i].begin(), adj_list[i].end(),greater<int>());
	}


	DFS(start, 0);
	for (int i = 1; i <= n; i++) {
		cout << depths[i] << "\n";
	}
}

void DFS(int now, int depth) {
	if (visited[now] == true) {
		return;
	}
	visited[now] = true;
	depths[now] = depth;
	cnt++;

	for (int i : adj_list[now]) {
		if (visited[i] == false) {
			DFS(i,depth+1);
		}
	}
}
