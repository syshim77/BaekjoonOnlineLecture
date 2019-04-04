#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
long long mx = 0, *tree;

long long maxHeight(long long left, long long right) {
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (mid > tree[i]) {
				continue;
			}
			else {
				sum += (tree[i] - mid);
			}
		}

		if (sum < m) {
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
	cin >> n >> m;
	
	tree = new long long[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> tree[i];

		if (mx < tree[i]) {
			mx = tree[i];
		}
	}

	long long res = maxHeight(1, mx);
	cout << res << '\n';

	delete[] tree;
	return 0;
}