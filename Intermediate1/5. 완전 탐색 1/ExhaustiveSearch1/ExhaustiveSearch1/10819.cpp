#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, *arr, ans = 0;
	cin >> n;
	arr = new int[n + 1];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	do {
		int sum = 0;
		for (int i = 1; i < n; i++)
			sum += abs(arr[i - 1] - arr[i]);

		ans = max(ans, sum);
	} while (next_permutation(arr, arr + n));

	cout << ans << '\n';

	return 0;
}