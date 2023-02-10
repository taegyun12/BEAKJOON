#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static vector<vector<int>> adj_list;
static vector<bool> visited;
static vector<int> pr;
int cnt = 1;
void DFS(int v);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, start;
	cin >> n >> m >> start;

	adj_list.resize(n + 1);
	visited = vector<bool>(n + 1, false);
	for (int i = 1; i <= m; i++) {
		int s, e;
		cin >> s >> e;
		adj_list[s].push_back(e);
		adj_list[e].push_back(s);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj_list[i].begin(), adj_list[i].end());
	}
	pr = vector<int>(n + 1, 0);

	DFS(start);

	for (int i = 1; i <= n; i++) {
		cout << pr[i] << "\n";
	}
}

void DFS(int v) {
	if (visited[v] == true) {
		return;
	}
	visited[v] = true;
	pr[v] = cnt;
	cnt++;

	for (int i : adj_list[v]) {
		if (visited[i] == false) {
			DFS(i);
		}
	}
}
