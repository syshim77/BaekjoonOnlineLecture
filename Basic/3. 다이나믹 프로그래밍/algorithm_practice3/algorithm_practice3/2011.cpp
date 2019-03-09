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
	s = " " + s;	// 1부터 시작하므로 앞에 공백을 추가하지 않으면 두번째 자리부터 읽게 됨
	for (int i = 1; i <= len; i++) {
		int a = s[i] - 48;
		if (1 <= a && a <= 9) {		// 한자리 수라고 할 때
			dp[i] += dp[i - 1];
			dp[i] %= 1000000;
		}

		if (i == 1)
			continue;

		if (s[i - 1] - 48 == 0)	// 10의 자리가 0이 될 수 없으므로 제외
			continue;

		a = (s[i] - 48) + (s[i - 1] - 48) * 10;
		if (10 <= a && a <= 26) {	// 두자리 수라고 할 때
			dp[i] += dp[i - 2];
			dp[i] %= 1000000;
		}
	}

	cout << dp[len] << '\n';

	return 0;
}