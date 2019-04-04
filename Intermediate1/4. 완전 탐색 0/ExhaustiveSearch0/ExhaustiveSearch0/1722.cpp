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