#include <iostream>
using namespace std;

int main() {
	int total = 0;
	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		total += i;
		i++;
	}

	cout << total << '\n';

	return 0;
}