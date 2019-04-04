#include <iostream>
#include <algorithm>
using namespace std;

long long findMax(long long left, long long right, long long *line, int l, int n) {
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < l; i++) {
			cnt += line[i] / mid;
		}

		if (cnt < n) {
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
	int k, n;
	long long m = 0, *line;
	cin >> k >> n;
	
	line = new long long[k + 1];
	for (int i = 0; i < k; i++) {
		cin >> line[i];

		if (line[i] > m)
			m = line[i];
	}

	long long res = findMax(1, m, line, k, n);
	cout << res << '\n';

	delete[] line;
	return 0;
}