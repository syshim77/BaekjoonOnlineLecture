#include <iostream>
#include <queue>
using namespace std;

int cnt[1000010];
bool visit[1000010];

int main() {
	int f, s, g, u, d;
	queue<int> q;
	cin >> f >> s >> g >> u >> d;
	q.push(s);
	cnt[s] = 0;
	visit[s] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		int up = cur + u;
		if (up <= f && !visit[up]) {
			visit[up] = true;
			q.push(up);
			cnt[up] = cnt[cur] + 1;
		}

		int down = cur - d;
		if (down >= 1 && !visit[down]) {
			visit[down] = true;
			q.push(down);
			cnt[down] = cnt[cur] + 1;
		}
	}

	if (visit[g])
		cout << cnt[g] << '\n';
	else
		cout << "use the stairs" << '\n';

	return 0;
}