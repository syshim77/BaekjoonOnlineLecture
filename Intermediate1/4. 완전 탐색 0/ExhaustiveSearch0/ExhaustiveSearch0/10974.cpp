#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, *permut;
	cin >> n;
	permut = new int[n + 1];

	for (int i = 0; i < n; i++) {
		permut[i] = i + 1;
		cout << permut[i] << " ";
	}
	cout << '\n';

	while (next_permutation(permut, permut + n)) {
		for (int i = 0; i < n; i++) {
			cout << permut[i] << " ";
		}
		cout << '\n';
	}

	delete[] permut;
	return 0;
}