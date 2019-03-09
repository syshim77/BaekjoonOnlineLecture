#include <iostream>
using namespace std;

int n;
int dp[100002];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j*j <= i; j++) {
			if (dp[i] > dp[i - j*j] + 1)
				dp[i] = dp[i - j*j] + 1;
		}
	}

	cout << dp[n] << '\n';

	return 0;
}