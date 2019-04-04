#include <iostream>
using namespace std;

int main() {
	int n, m, k, cnt = 0;
	cin >> n >> m >> k;

	while (n >= 2 && m >= 1 && n + m >= k + 3) {
		cnt++;
		n -= 2;
		m--;
	}

	cout << cnt << '\n';

	return 0;
}