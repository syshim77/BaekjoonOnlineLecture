#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int dp[1002] = { 0 };
	cin >> n;

	dp[0] = 1; dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		// dp[i]�� dp[i-1]�� ���� ���簢�� �Ѱ�,
		// dp[i-2]�� ���� ���簢�� �ΰ� or 2x2 ���簢�� �Ѱ� ���̴� ����� ���� �� 
		dp[i] = dp[i - 1] + (2 * dp[i - 2]);
		dp[i] %= 10007;
	}

	cout << dp[n] << '\n';

	return 0;
}