// 코드 다시 분석해볼 것
#include <iostream>
using namespace std;

void printStar(int y, int x) {
	while (y != 0) {
		if (y % 3 == 1 && x % 3 == 1) {
			cout << " ";
			return;
		}

		x /= 3;
		y /= 3;
	}
	cout << "*";
}

void star(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printStar(i, j);
		}
		cout << '\n';
	}
}

int main() {
	int n;
	cin >> n;

	star(n);

	return 0;
}