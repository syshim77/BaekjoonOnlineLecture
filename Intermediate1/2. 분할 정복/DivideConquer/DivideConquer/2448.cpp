// �ڵ� �м� �ٽ� �غ� ��(2447���� ���ؼ�)
// blank�� ' '�� �Է�(null ���ڷ� �Է��ϸ� Ʋ��)
#include <iostream>
using namespace std;

char star[4000][7000];

void printBlank(int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2*n-1; j++)
			star[i][j] = ' ';
}

void printStar(int n, int x, int y) {
	if (n == 3) {
		star[y][x] = '*';
		star[y + 1][x - 1] = '*';
		star[y + 1][x + 1] = '*';
		star[y + 2][x - 2] = '*';
		star[y + 2][x - 1] = '*';
		star[y + 2][x] = '*';
		star[y + 2][x + 1] = '*';
		star[y + 2][x + 2] = '*';
		return;
	}

	printStar(n / 2, x, y);
	printStar(n / 2, x - (n / 2), y + (n / 2));
	printStar(n / 2, x + (n / 2), y + (n / 2));
}

int main() {
	int n;
	cin >> n;

	printBlank(n);
	printStar(n, n-1, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++)
			cout << star[i][j];
		cout << '\n';
	}

	return 0;
}