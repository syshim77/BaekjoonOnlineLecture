#include <iostream>
using namespace std;

int n, k;
long long dp[202][202];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> k;

	dp[0][0] = 1;
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			for (int p = 0; p <= i; p++) {
				dp[i][j] += dp[i - p][j - 1];
				dp[i][j] %= 1000000000;
			}
		}
	}

	cout << dp[n][k] << '\n';

	return 0;
}