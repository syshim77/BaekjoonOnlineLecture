#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - i + 1; j <= n - 1; j++)
			cout << " ";
		
		for (int k = n; k >= i; k--)
			cout << "*";
		
		cout << '\n';
	}

	return 0;
}