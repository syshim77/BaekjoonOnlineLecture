#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, *p, sum = 0;
	cin >> n;

	p = new int[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n);

	for (int i = 0; i < n; i++) {
		int add = 0;
		for (int j = 0; j <= i; j++) {
			add += p[j];
		}
		sum += add;
	}

	cout << sum << '\n';

	delete[] p;
	return 0;
}