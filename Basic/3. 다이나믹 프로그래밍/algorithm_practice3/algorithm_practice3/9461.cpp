#include <iostream>
using namespace std;

int tc, n;
long long dp[102];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> tc;

	while (tc--) {
		cin >> n;

		dp[0] = 1; dp[1] = 1; dp[2] = 1;
		for (int i = 3; i < n; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}

		cout << dp[n - 1] << '\n';
	}

	return 0;
}