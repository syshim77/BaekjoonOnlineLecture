#include <iostream>
using namespace std;

int main() {
	int r, c, **rollercoaster, minimum = 1001, x, y;
	cin >> r >> c;

	rollercoaster = new int*[r + 1];
	for (int i = 0; i < r; i++) {
		rollercoaster[i] = new int[c + 1];
		for (int j = 0; j < c; j++) {
			cin >> rollercoaster[i][j];

			if (rollercoaster[i][j] < minimum) {
				minimum = rollercoaster[i][j];
				x = j;
				y = i;
			}
		}
	}

	int cnt = 0;
	if (r % 2 == 0 && c % 2 == 0) {			// both even
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				
			}
		}
	}
	else if (r % 2 == 0 && c % 2 == 1) {	// r: even, c: odd

	}
	else if (r % 2 == 1 && c % 2 == 0) {	// r: odd, c: even

	}
	else {									// both odd
		for (int i = 0; i < r - 1; i++) {
			for (int j = 0; j < c - 1; j++) {
				cout << "R";
			}
			cout << "D";
			for (int j = 0; j < c - 1; j++) {
				cout << "L";
			}
			cout << "D";
		}
		for (int i = 0; i < c; i++)
			cout << "R";
		cout << "D";
	}

	for (int i = 0; i < r; i++)
		delete[] rollercoaster[i];
	delete[] rollercoaster;
	return 0;
}