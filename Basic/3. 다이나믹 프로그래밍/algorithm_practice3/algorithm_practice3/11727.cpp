#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int dp[1002] = { 0 };
	cin >> n;

	dp[0] = 1; dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		// dp[i]는 dp[i-1]에 세로 직사각형 한개,
		// dp[i-2]에 가로 직사각형 두개 or 2x2 정사각형 한개 붙이는 경우의 수의 합 
		dp[i] = dp[i - 1] + (2 * dp[i - 2]);
		dp[i] %= 10007;
	}

	cout << dp[n] << '\n';

	return 0;
}