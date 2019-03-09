#include <iostream>
#include <algorithm>
using namespace std;

int n;
int *arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';

	delete[] arr;
	return 0;
}