#include <iostream>
#include <algorithm>
using namespace std;

int n, c;
long long *home;

long long maxDistance(long long left, long long right) {
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		int cnt = 1;
		int idx = 0;
		for (int i = 0; i < n; i++) {
			if ((home[i] - home[idx]) >= mid) {
				cnt++;
				idx = i;
			}
		}

		if (cnt < c) {
			right = mid - 1;
		}
		else {
			ans = max(ans, mid);
			left = mid + 1;
		}
	}

	return ans;
}

int main() {
	cin >> n >> c;
	home = new long long[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> home[i];
	}

	sort(home, home + n);

	long long res = maxDistance(1, home[n - 1] - home[0]);
	cout << res << '\n';

	delete[] home;
	return 0;
}