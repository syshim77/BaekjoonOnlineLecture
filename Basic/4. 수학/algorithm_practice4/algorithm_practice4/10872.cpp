#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	long long res = 1;
	cin >> n;

	for (int i = 2; i <= n; i++)
		res *= i;

	cout << res << '\n';

	return 0;
}