// 이해 아예 못한 문제이므로 꼭 다시 풀어볼 것
#include <iostream>
using namespace std;

int sum(int k) {
	return (1 << k);
}

int solve(int n, int x, int y) {
	if (n == 1)
		return 2 * x + y;
	else {
		if (x < sum(n - 1)) {
			if (y < sum(n - 1))
				return solve(n - 1, x, y);
			else
				return solve(n - 1, x, y - sum(n - 1)) + sum(2 * n - 2);
		}
		else {
			if (y < sum(n - 1))
				return solve(n - 1, x - sum(n - 1), y) + sum(2 * n - 2) * 2;
			else
				return solve(n - 1, x - sum(n - 1), y - sum(n - 1)) + sum(2 * n - 2) * 3;
		}
	}
}

int main() {
	int n, r, c;
	/*while (cin >> n >> r >> c)
		cout << solve(n, r, c) << '\n';*/
	cin >> n >> r >> c;
	cout << solve(n, r, c) << '\n';

	return 0;
}