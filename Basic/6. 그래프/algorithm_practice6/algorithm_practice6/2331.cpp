#include <iostream>
#include <cmath>
using namespace std;

int a, p;
int check[1000001];

int next(int a, int p) {
	int n = 0;
	while (a > 0) {
		n += (int)pow((double)(a % 10), (double)p);
		a /= 10;
	}

	return n;
}

int dfs(int a, int p, int cnt) {
	if (check[a] != 0) {
		return check[a] - 1;
	}

	check[a] = cnt;

	int nxt = next(a, p);

	return dfs(nxt, p, cnt + 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> a >> p;

	cout << dfs(a, p, 1) << '\n';

	return 0;
}