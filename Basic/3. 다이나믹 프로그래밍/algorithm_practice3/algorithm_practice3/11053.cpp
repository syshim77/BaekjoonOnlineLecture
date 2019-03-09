#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int dp[1002];
	int *arr;
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
	}

	int res = dp[0];
	for (int i = 0; i < n; i++) {
		if (res < dp[i])
			res = dp[i];
	}

	cout << res << '\n';

	delete[] arr;

	return 0;
}