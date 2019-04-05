#include <iostream>
using namespace std;

int r, c;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
bool visit[26];

int route(char **alpha, int x, int y) {
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		int cx = x + dx[i];
		int cy = y + dy[i];

		if (cx < 0 || cx >= r || cy < 0 || cy >= c)
			continue;
		if (!visit[alpha[cx][cy] - 65]) {
			visit[alpha[cx][cy] - 65] = true;
			int next = route(alpha, cx, cy);
			if (cnt < next)
				cnt = next;
			visit[alpha[cx][cy] - 65] = false;
		}
	}

	return cnt + 1;
}

int main() {
	char **alpha;
	cin >> r >> c;
	alpha = new char*[r + 1];
	for (int i = 0; i < r; i++) {
		alpha[i] = new char[c + 1];
		for (int j = 0; j < c; j++) {
			cin >> alpha[i][j];
		}
	}

	visit[alpha[0][0] - 65] = true;
	cout << route(alpha, 0, 0) << '\n';

	for (int i = 0; i < r; i++)
		delete[] alpha[i];
	delete[] alpha;
	return 0;
}