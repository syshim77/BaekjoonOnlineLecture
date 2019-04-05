#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, *s;

	while (1) {
		cin >> n;
		if (n == 0)
			break;

		s = new int[n + 1];
		for (int i = 0; i < n; i++)
			cin >> s[i];

		sort(s, s + n);

		do {
			for (int i = 0; i < n; i++)
				cout << s[i] << " ";
			cout << '\n';
		} while (next_permutation(s, s + n));
		cout << '\n';
		delete[] s;
	}

	return 0;
}