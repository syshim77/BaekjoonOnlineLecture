// 푸는 방법은 아는데 코드 작성이 어려움
#include <iostream>
using namespace std;

long long solve(int st, int en, int *a, int *b) {
	if (st == en) {
		return 0;
	}

	int mid = (st + en) / 2;
	long long ans = solve(st, mid, a, b) + solve(mid + 1, en, a, b);
	int i = st; int j = mid + 1; int k = 0;
	while (i <= mid || j <= en) {
		if (i <= mid && (j > en || a[i] <= a[j]))
			b[k++] = a[i++];
		else {
			ans += (long long)(mid - i + 1);
			b[k++] = a[j++];
		}
	}

	for (int i = st; i <= en; i++)
		a[i] = b[i - st];

	return ans;
}

int main() {
	int n, *a, *b;
	cin >> n;
	a = new int[n + 1];
	b = new int[n + 1];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	long long res = solve(0, n - 1, a, b);
	cout << res << '\n';

	delete[] a;
	delete[] b;
	return 0;
}