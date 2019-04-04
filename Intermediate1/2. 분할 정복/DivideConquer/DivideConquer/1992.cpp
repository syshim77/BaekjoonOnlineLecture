#include <iostream>
#include <cstdio>
using namespace std;

bool same(int **v, int n, int x, int y) {
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (v[i][j] != v[y][x])
				return false;
		}
	}

	return true;
}

void quadTree(int **v, int n, int x, int y) {
	if (same(v, n, x, y)) {
		cout << v[y][x];
	}
	else {
		cout << "(";

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				quadTree(v, n / 2, x + (n / 2)*j, y + (n / 2)*i);
			}
		}

		cout << ")";
	}
}

int main() {
	int n, **video;
	cin >> n;

	video = new int*[n + 1];
	for (int i = 0; i < n; i++) {
		video[i] = new int[n + 1];
		for (int j = 0; j < n; j++) {
			scanf_s("%1d", &video[i][j]);
		}
	}
	
	quadTree(video, n, 0, 0);
	cout << '\n';

	for (int i = 0; i < n; i++) {
		delete[] video[i];
	}
	delete[] video;
	return 0;
}