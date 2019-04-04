#include <iostream>
using namespace std;

int n, r, c, cnt;

bool check(int n, int x, int y) {
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (i == r&&j == c) {
				return true;
			}

			cnt++;
		}
	}

	return false;
}

void solve(int n, int x, int y) {
	if (check(n, x, y)) {
		return;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			solve(n / 2, x + (n / 2)*j, y + (n / 2)*i);
		}
	}
}

int main() {
	cin >> n >> r >> c;

	solve(n, 0, 0);
	cout << cnt << '\n';

	return 0;
}