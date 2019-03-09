#include <iostream>
using namespace std;

int n;
int dp[100002];

int main() {
	ios_base::sync_with_stdio(false);
	int *arr;
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		if (dp[i - 1] + arr[i] < arr[i])
			dp[i] = arr[i];
		else
			dp[i] = dp[i - 1] + arr[i];
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