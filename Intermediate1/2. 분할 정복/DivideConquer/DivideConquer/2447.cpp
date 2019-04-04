#include <iostream>
using namespace std;

void printBlank(int n, int x, int y) {
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			cout << " ";
		}
		cout << '\n';
	}
}

void printStar(int n, int x, int y) {
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void star(int n, int x, int y) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				printBlank(n / 3, x + (n / 3)*j, y + (n / 3)*i);
			}
			else {
				printStar(n / 3, x + (n / 3)*j, y + (n / 3)*i);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;

	star(n, 0, 0);

	return 0;
}