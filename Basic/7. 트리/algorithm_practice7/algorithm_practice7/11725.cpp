#include <iostream>
#include <queue>
using namespace std;

#define MAX 100001

vector<int> a[MAX];
int parent[MAX];
bool check[MAX];
int depth[MAX];
int dist[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}

	depth[1] = 0;
	check[1] = true;
	queue<int> q;
	q.push(1);
	parent[1] = 0;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int y : a[x]) {
			if (!check[y]) {
				depth[y] = depth[x] + 1;
				check[y] = true;
				parent[y] = x;
				q.push(y);
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << '\n';
	}

	return 0;
}