#include <cstdio>
#include <queue>
using namespace std;

int n, m;
int miro[101][101];
bool visit[101][101];
int dist[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int> > q;

void bfs() {
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int cx = a + dx[i];
			int cy = b + dy[i];

			if (0 <= cx && cx < n && 0 <= cy && cy < m) {
				if (visit[cx][cy] == false && miro[cx][cy] == 1) {
					q.push(make_pair(cx, cy));
					dist[cx][cy] = dist[a][b] + 1;
					visit[cx][cy] = true;
				}
			}
		}
	}
}

int main() {
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &miro[i][j]);
		}
	}

	dist[0][0] = 1;
	visit[0][0] = true;
	q.push(make_pair(0, 0));
	bfs();

	printf("%d\n", dist[n - 1][m - 1]);

	return 0;
}