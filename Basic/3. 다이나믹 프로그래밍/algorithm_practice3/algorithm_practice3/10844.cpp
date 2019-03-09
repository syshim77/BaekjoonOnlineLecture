#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[102][10];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;	// 한자리 수일때는 경우의 수가 한개
	for (int i = 2; i <= n; i++) {	// 두자리 수 이상일 때
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				dp[i][j] += dp[i - 1][j + 1];
			else if (j == 9)
				dp[i][j] += dp[i - 1][j - 1];
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

			dp[i][j] %= 1000000000;
		}
	}

	long long sum = 0;
	for (int i = 0; i <= 9; i++)
		sum += dp[n][i];

	cout << sum % 1000000000 << '\n';

	return 0;
}