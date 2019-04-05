#include <iostream>
using namespace std;

int main() {
	int tc, n, cnt[11];
	cin >> tc;

	cnt[0] = 0;
	cnt[1] = 1;	// 1
	cnt[2] = 2;	// 1+1, 2
	cnt[3] = 4;	// 1+1+1, 1+2, 2+1, 3
//	cnt[4] = 7;	// 7 = 1+2+4
//	cnt[5] = 13;// 13 = 2+4+7
//	...
//	cnt[n] = cnt[n - 1] + cnt[n - 2] + cnt[n - 3];
	for (int i = 4; i < 11; i++)	// 조건에서 n은 11보다 작기 때문
		cnt[i] = cnt[i - 1] + cnt[i - 2] + cnt[i - 3];

	while (tc--) {
		cin >> n;
		cout << cnt[n] << '\n';
	}

	return 0;
}