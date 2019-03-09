#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

int tc, v, e;
int visit[20001];
vector<int> vec[20001];
stack<int> s;

void init() {
	for (int i = 1; i <= v; i++) {
		vec[i].clear();
		visit[i] = 0;
	}
}

bool dfs(int node, int color) {
	visit[node] = color;

	int len = vec[node].size();
	for (int i = 0; i < len; i++) {
		int next = vec[node][i];
		if (visit[next] == 0) {
			if (dfs(next, 3 - color) == false) {
				return false;
			}
		}
		else if (visit[node] == visit[next]) {
			return false;
		}
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> tc;

	while (tc--) {
		init();
		cin >> v >> e;

		for (int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}

		bool check = true;
		for (int i = 1; i <= v; i++) {
			if (visit[i] == 0) {
				if (dfs(i, 1) == false) {
					check = false;
				}
			}
		}

		if (check)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}


	return 0;
}