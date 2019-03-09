#include <iostream>
#include <string>
using namespace std;

string s;
int dp[5002];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> s;

	dp[0] = 1;
	int len = s.size();
	s = " " + s;	// 1���� �����ϹǷ� �տ� ������ �߰����� ������ �ι�° �ڸ����� �а� ��
	for (int i = 1; i <= len; i++) {
		int a = s[i] - 48;
		if (1 <= a && a <= 9) {		// ���ڸ� ����� �� ��
			dp[i] += dp[i - 1];
			dp[i] %= 1000000;
		}

		if (i == 1)
			continue;

		if (s[i - 1] - 48 == 0)	// 10�� �ڸ��� 0�� �� �� �����Ƿ� ����
			continue;

		a = (s[i] - 48) + (s[i - 1] - 48) * 10;
		if (10 <= a && a <= 26) {	// ���ڸ� ����� �� ��
			dp[i] += dp[i - 2];
			dp[i] %= 1000000;
		}
	}

	cout << dp[len] << '\n';

	return 0;
}