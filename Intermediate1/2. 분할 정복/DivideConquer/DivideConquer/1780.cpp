#include <iostream>
using namespace std;

int cnt[3];

bool check(int n, int x, int y, int **paper) {
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (paper[i][j] != paper[y][x])
				return false;
		}
	}

	return true;
}

void count(int n, int x, int y, int **paper) {
	if (check(n, x, y, paper)) {
		cnt[paper[y][x] + 1]++;
		return;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			count(n / 3, x + j*(n / 3), y + i*(n / 3), paper);
		}
	}
}

int main() {
	int n, **paper;
	cin >> n;
	paper = new int*[n + 1];
	for (int i = 0; i < n; i++) {
		paper[i] = new int[n + 1];
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}

	count(n, 0, 0, paper);
	cout << cnt[0] << '\n' << cnt[1] << '\n' << cnt[2] << '\n';

	for (int i = 0; i < n; i++) {
		delete[] paper[i];
	}
	delete[] paper;
	return 0;
}