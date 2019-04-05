#include <iostream>
#include <queue>
using namespace std;

#define MAX 200000

int time[MAX + 1];
bool visit[MAX + 1];

int main() {
	int n, k;
	queue<int> q;
	cin >> n >> k;
	q.push(n);

	time[n] = 0;
	visit[n] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur - 1 >= 0) {
			if (!visit[cur - 1]) {
				q.push(cur - 1);
				visit[cur - 1] = true;
				time[cur - 1] = time[cur] + 1;
			}
		}
		if (cur + 1 < MAX) {
			if (!visit[cur + 1]) {
				q.push(cur + 1);
				visit[cur + 1] = true;
				time[cur + 1] = time[cur] + 1;
			}
		}
		if (cur * 2 < MAX) {
			if (!visit[cur * 2]) {
				q.push(cur * 2);
				visit[cur * 2] = true;
				time[cur * 2] = time[cur] + 1;
			}
		}
	}

	cout << time[k] << '\n';

	return 0;
}