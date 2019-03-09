#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, cnt, ansCnt;
long long ans;
long long arr[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] == arr[i])
			cnt++;
		else
			cnt = 1;

		if (ansCnt < cnt) {
			ansCnt = cnt;
			ans = arr[i];
		}
	}

	cout << ans << '\n';

	return 0;
}