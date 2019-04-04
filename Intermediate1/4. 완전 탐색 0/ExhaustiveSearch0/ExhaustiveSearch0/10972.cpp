#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, *permut;
	cin >> n;
	permut = new int[n + 1];

	for (int i = 0; i < n; i++)
		cin >> permut[i];

	if (next_permutation(permut, permut + n)) {
		for (int i = 0; i < n; i++) {
			cout << permut[i] << " ";
		}
		cout << '\n';
	}
	else {
		cout << "-1" << '\n';
	}

	delete[] permut;
	return 0;
}