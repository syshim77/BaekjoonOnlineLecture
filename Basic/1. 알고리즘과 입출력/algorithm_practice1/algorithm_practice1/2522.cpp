#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - 1; j >= i; j--)
			cout << " ";

		for (int k = 1; k <= i; k++)
			cout << "*";

		cout << '\n';
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int j = n - 1; j >= i; j--)
			cout << " ";

		for (int k = 1; k <= i; k++)
			cout << "*";

		cout << '\n';
	}

	return 0;
}