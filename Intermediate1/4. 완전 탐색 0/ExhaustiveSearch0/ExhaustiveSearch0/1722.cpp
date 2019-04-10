// 답 코드인데 이해가 안되는 부분이 있음
// 다시 한 번 분석해볼 것
#include <iostream>
#include <vector>
using namespace std;
long long f[21] = { 1 };
bool c[21];
int main() {
	for (int i = 1; i <= 20; i++) {
		f[i] = f[i - 1] * i;
	}
	int n;
	cin >> n;
	int what;
	cin >> what;
	if (what == 2) {
		vector<int> a(n);
		for (int i = 0; i<n; i++) {
			cin >> a[i];
		}
		long long ans = 0;
		for (int i = 0; i<n; i++) {
			for (int j = 1; j<a[i]; j++) {
				if (c[j] == false) {
					ans += f[n - i - 1];
				}
			}
			c[a[i]] = true;
		}
		cout << ans + 1 << '\n';
	}
	else if (what == 1) {
		long long k;
		cin >> k;
		vector<int> a(n);
		for (int i = 0; i<n; i++) {
			for (int j = 1; j <= n; j++) {
				if (c[j] == true) continue;
				if (f[n - i - 1] < k) {
					k -= f[n - i - 1];
				}
				else {
					a[i] = j;
					c[j] = true;
					break;
				}
			}
		}
		for (int i = 0; i<n; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}

/* 시간 초과
#include <iostream>
#include <algorithm>
using namespace std;

bool same(int *arr1, int *arr2, int n) {
	for (int i = 0; i < n; i++) {
		if (arr1[i] != arr2[i])
			return false;
	}

	return true;
}

int main() {
	int n, test, k, *permut;
	cin >> n;
	permut = new int[n + 1];

	cin >> test;
	if (test == 1) {
		cin >> k;

		for (int i = 0; i < n; i++)
			permut[i] = i + 1;

		int cnt = 1;
		while (cnt != k) {
			next_permutation(permut, permut + n);
			cnt++;
		}

		for (int i = 0; i < n; i++) {
			cout << permut[i] << " ";
		}
		cout << '\n';
	}
	else {
		int cnt = 1;
		int *first = new int[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> permut[i];
			first[i] = i + 1;
		}

		do {
			if (same(permut, first, n)) {
				cout << cnt << '\n';
				break;
			}
			cnt++;
		} while (next_permutation(first, first + n));
	}

	delete[] permut;
	return 0;
}
*/