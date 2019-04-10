#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int sdoku[10][10];
bool rowNum[10][10];
bool colNum[10][10];
bool squNum[10][10];

bool solve(int n) {
	if (n == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << sdoku[i][j] << ' ';
			cout << '\n';
		}

		return true;
	}

	int x = n/9;
	int y = n%9;
	if (sdoku[x][y] != 0)
		return solve(n + 1);
	else {
		for (int i = 1; i <= 9; i++) {
			if (rowNum[x][i] == 0 && colNum[y][i] == 0 && squNum[(x / 3) * 3 + (y / 3)][i] == 0) {
				rowNum[x][i] = colNum[y][i] = squNum[(x / 3) * 3 + (y / 3)][i] = true;
				sdoku[x][y] = i;
				if (solve(n + 1))
					return true;
				sdoku[x][y] = 0;
				rowNum[x][i] = colNum[y][i] = squNum[(x / 3) * 3 + (y / 3)][i] = false;
			}
		}
	}

	return false;
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sdoku[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sdoku[i][j] != 0) {
				rowNum[i][sdoku[i][j]] = true;
				colNum[j][sdoku[i][j]] = true;
				squNum[(i / 3) * 3 + (j / 3)][sdoku[i][j]] = true;
			}
		}
	}

	solve(0);

	return 0;
}