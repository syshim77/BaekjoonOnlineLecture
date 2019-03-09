#include <iostream>
using namespace std;

int x, y;

int gcd(int a, int b) {
	if (b == 0)
		return a;

	gcd(b, a%b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> x >> y;

	int res = gcd(x, y);

	// L*G=a*b
	cout << res << '\n' << (x*y) / res << '\n';

	return 0;
}