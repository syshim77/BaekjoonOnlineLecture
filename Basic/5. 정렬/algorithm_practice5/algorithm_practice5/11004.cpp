#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
long long *arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	arr = new long long[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	k--;
	nth_element(arr, arr + k, arr + n);

	cout << arr[k] << '\n';

	delete[] arr;
	return 0;
}