#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {
	}
};

vector<Edge> a[100001];
bool check[100001];
int dist[100001];

void bfs(int start) {
	memset(dist, 0, sizeof(dist));
	memset(check, false, sizeof(check));

	queue<int> q;
	check[start] = true;
	q.push(start);

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		int len = a[x].size();
		for (int i = 0; i < len; i++) {
			Edge &e = a[x][i];
			if (check[e.to] == false) {
				dist[e.to] = dist[x] + e.cost;
				q.push(e.to);
				check[e.to] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		while (1) {
			int y, z;
			cin >> y;

			if (y == -1) break;
			
			cin >> z;
			a[x].push_back(Edge(y, z));
		}
	}

	bfs(1);

	int start = 1;
	for (int i = 2; i <= n; i++) {
		if (dist[i] > dist[start]) {
			start = i;
		}
	}

	bfs(start);
	int ans = dist[1];
	for (int i = 2; i <= n; i++) {
		if (ans < dist[i]) {
			ans = dist[i];
		}
	}

	cout << ans << '\n';
	
	return 0;
}