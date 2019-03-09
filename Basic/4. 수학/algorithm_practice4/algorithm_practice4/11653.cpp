#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		if (n%i == 0) {
			n /= i;
			cout << i << endl;
			i = 1;
		}
	}

	return 0;
}