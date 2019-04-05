#include <iostream>
using namespace std;

bool cur[15][15];
bool checkCol[15];
bool checkCro[40];
bool checkInv[40];

bool check(int row, int col, int n) {
	if (checkCol[col])
		return false;
	if (checkCro[row + col])
		return false;
	if (checkInv[row - col + n])
		return false;

	return true;
}

int cnt(int n, int row) {
	if (row == n)
		return 1;
	
	int c = 0;
	for (int col = 0; col < n; col++) {
		if (check(row, col, n)) {
			checkCro[row + col] = true;
			checkInv[row - col + n] = true;
			checkCol[col] = true;
			cur[row][col] = true;
			c += cnt(n, row + 1);
			checkCro[row + col] = false;
			checkInv[row - col + n] = false;
			checkCol[col] = false;
			cur[row][col] = false;
		}
	}

	return c;
}

int main() {
	int n;
	cin >> n;

	cout << cnt(n, 0) << '\n';

	return 0;
}