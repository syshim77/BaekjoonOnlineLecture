#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, p = 0, m = 0, sum = 0;
	int *plus, *minus;
	cin >> n;

	plus = new int[n + 1];
	minus = new int[n + 1];

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a > 0) {
			plus[p] = a;
			p++;
		}
		else {
			minus[m] = a;
			m++;
		}
	}
	
	sort(plus, plus + p);
	sort(minus, minus + m);

	if (m % 2 == 0 && minus[m - 1] == 0) {
		m -= 2;
	}

	for (int i = p - 1; i >= 0; i-=2) {
		if (i - 1 == -1) {
			sum += plus[i];
			break;
		}

		if (plus[i] == 1 || plus[i - 1] == 1) {
			sum += plus[i] + plus[i - 1];
			continue;
		}

		sum += plus[i] * plus[i - 1];
	}
	for (int i = 0; i < m; i+=2) {
		if (i + 1 == m) {
			sum += minus[i];
			break;
		}

		sum += minus[i] * minus[i + 1];
	}

	cout << sum << '\n';

	return 0;
}