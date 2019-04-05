#include <iostream>
#include <queue>
using namespace std;

bool ans[201];
bool check[201][201];

int main() {
	int a, b, c;
	queue<pair<int, int>> q;
	cin >> a >> b >> c;

	q.push(make_pair(0, 0));
	check[0][0] = true;
	ans[c] = true;

	while (!q.empty()) {
		int first = q.front().first;
		int second = q.front().second;
		int third = c - first - second;
		q.pop();

		int na, nb, nc;
		na = first;
		nb = second;
		nc = third;
		// a -> b
		nb += na;
		na = 0;
		if (nb >= b) {
			na = nb - b;
			nb = b;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}

		na = first;
		nb = second;
		nc = third;
		// a -> c
		nc += na;
		na = 0;
		if (nc >= c) {
			na = nc - c;
			nc = c;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}

		na = first;
		nb = second;
		nc = third;
		// b -> a
		na += nb;
		nb = 0;
		if (na >= a) {
			nb = na - a;
			na = a;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}

		na = first;
		nb = second;
		nc = third;
		// b -> c
		nc += nb;
		nb = 0;
		if (nc >= c) {
			nb = nc - c;
			nc = c;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}

		na = first;
		nb = second;
		nc = third;
		// c -> a
		na += nc;
		nc = 0;
		if (na >= a) {
			nc = na - a;
			na = a;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}

		na = first;
		nb = second;
		nc = third;
		// c -> b
		nb += nc;
		nc = 0;
		if (nb >= b) {
			nc = nb - b;
			nb = b;
		}
		if (!check[na][nb]) {
			check[na][nb] = true;
			q.push(make_pair(na, nb));
			if (na == 0) {
				ans[nc] = true;
			}
		}
	}

	for (int i = 0; i <= c; i++) {
		if (ans[i]) {
			cout << i << ' ';
		}
	}
	cout << '\n';

	return 0;
}