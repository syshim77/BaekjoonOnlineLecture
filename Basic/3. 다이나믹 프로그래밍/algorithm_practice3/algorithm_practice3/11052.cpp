#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int dp[1002] = { 0 };
	int *cost;
	cin >> n;
	cost = new int[n + 1];

	for (int i = 1; i <= n; i++)	// 1���� �����ؾ��Կ� ����
		cin >> cost[i];

	for (int i = 1; i <= n; i++) {	// 0���� �����ϸ� �ȵǰ� 1���� �����ؾ��Կ� ����
		for (int j = 1; j <= i; j++) {
			// dp[n] = dp[n-i] + cost[i]
			dp[i] = max(dp[i], dp[i - j] + cost[j]);
		}
	}

	cout << dp[n] << '\n';

	delete[] cost;

	return 0;
}