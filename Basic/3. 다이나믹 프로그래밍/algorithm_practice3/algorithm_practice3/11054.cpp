#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int dp[1002][2];
	int *arr;
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		dp[i][0] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[i][0] < dp[j][0] + 1)
				dp[i][0] = dp[j][0] + 1;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		dp[i][1] = 1;
		for (int j = n - 1; j >= i; j--) {
			if (arr[j] < arr[i] && dp[i][1] < dp[j][1] + 1)
				dp[i][1] = dp[j][1] + 1;
		}
	}

	int res = dp[0][0] + dp[0][1] - 1;
	for (int i = 0; i < n; i++) {
		if (res < dp[i][0] + dp[i][1] - 1)
			res = dp[i][0] + dp[i][1] - 1;
	}

	cout << res << '\n';

	delete[] arr;
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, maxarr;
//	int dp[2][1001] = { 0 };
//	int arr[1001] = { 0 };
//	int max = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		maxarr = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				if (maxarr < dp[0][j])
//					maxarr = dp[0][j];
//			}
//		}
//		dp[0][i] = maxarr + 1;
//	}
//
//	for (int i = n - 1; i >= 0; i--)
//	{
//		maxarr = 0;
//		for (int j = n; j > i; j--)
//		{
//			if (arr[i] > arr[j])
//			{
//				if (maxarr < dp[1][j])
//					maxarr = dp[1][j];
//			}
//		}
//		if (dp[1][i] < maxarr + 1)
//			dp[1][i] = maxarr + 1;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (max < dp[0][i] + dp[1][i])
//			max = dp[0][i] + dp[1][i];
//	}
//
//	cout << max - 1;
//
//	return 0;
//}
// ���ۿ��� �˻��߾��... �˼��մϴ�...
// ���ش� �� �����ϱ� ���� ������ �׵��� �� Ǭ ������ Ǯ��鼭
// �̰͵� ���� �ٽ� Ǯ��Կ�...�� �˼��մϴ٤�