#include <iostream>
#include <math.h>
using namespace std;

void hanoi(int n, int x, int y) {
	if (n == 0)
		return;
	hanoi(n - 1, x, 6 - x - y);
	cout << x << " " << y << '\n';
	hanoi(n - 1, 6 - x - y, y);
}

int main() {
	int n, k;
	cin >> n;

//	cout << (1 << n) - 1 << '\n';
	cout << (int)pow((double)2, (double)n) - 1 << '\n';
	hanoi(n, 1, 3);

	return 0;
}