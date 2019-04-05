#include <iostream>
#include <queue>
using namespace std;

int cnt[1000001];
bool visit[1000001];

int main() {
	int f, s, g, u, d;
	queue<int> q;
	cin >> f >> s >> g >> u >> d;
	q.push(s);
	visit[s] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur > g && !visit[cur] && d > 0 && cur - d > 0) {
			visit[cur - d] = true;
			q.push(cur - d);
			cnt[cur - d] = cnt[cur] + 1;
		}
		else if (cur < g && !visit[cur] && u > 0 && cur + u <= f) {
			visit[cur + u] = true;
			q.push(cur + u);
			cnt[cur + u] = cnt[cur] + 1;
		}
	}

	if (visit[g])
		cout << cnt[g] << '\n';
	else
		cout << "use the stairs" << '\n';

	return 0;
}