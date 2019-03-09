#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == n) {
			for (int s = 1; s <= 2*n - 1; s++)
				cout << "*";

			cout << '\n';

			break;
		}

		for (int j = n - i; j >= 1; j--)
			cout << " ";

		cout << "*";

		if (i != 1) {
			for (int k = 1; k <= 2 * (i - 1) - 1; k++)
				cout << " ";

			cout << "*";
		}

		cout << '\n';
	}

	return 0;
}