#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

static vector<vector<int>> adj_list;
static vector<bool> visited;

void DFS(int node);
void BFS(int node);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, start;
	cin >> n >> m >> start;
	
	adj_list.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		adj_list[s].push_back(e);
		adj_list[e].push_back(s);
	}

	for (int i = 1; i <= n; i++) {
		sort(adj_list[i].begin(), adj_list[i].end());
	}

	visited = vector<bool>(n + 1, false);

	DFS(start);
	cout << "\n";
	fill(visited.begin(), visited.end(), false);
	BFS(start);
}

void DFS(int node) {
	cout << node << " ";
	visited[node] = true;
	for (int i : adj_list[node]) {
		if (!visited[i]) {
			DFS(i);
		}
	}
}

void BFS(int node) {
	queue<int> myQ;
	myQ.push(node);
	visited[node] = true;

	while (!myQ.empty()) {
		int now_node = myQ.front();
		myQ.pop();
		cout << now_node << " ";
		for (int i : adj_list[now_node]) {
			if (!visited[i]) {
				visited[i] = true;
				myQ.push(i);
			}
		}
	}
}
