#include <iostream>
using namespace std;

int n;
int dp[1002][10];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 0; i <= 9; i++)
		dp[1][i] = 1;	// 한자리 수일때는 한 개의 경우의 수
	for (int i = 2; i <= n; i++) {	// 두자리 수 이상
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++)
				dp[i][j] += dp[i - 1][k];
			dp[i][j] %= 10007;
		}
	}

	long long sum = 0;
	for (int i = 0; i <= 9; i++)
		sum += dp[n][i];

	cout << sum % 10007 << '\n';

	return 0;
}