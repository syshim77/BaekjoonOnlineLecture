#include <iostream>
#include <string.h>
using namespace std;

int tc, n;
int arr[102];

int gcd(int a, int b) {
	if (b == 0)
		return a;

	gcd(b, a%b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> tc;

	while (tc--) {
		memset(arr, 0, n);
		cin >> n;

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		long long sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(arr[i], arr[j]);
			}
		}

		cout << sum << '\n';
	}

	return 0;
}