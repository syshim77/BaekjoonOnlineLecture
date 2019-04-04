#include <iostream>
#include <stdio.h>
using namespace std;

int n, m, cnt;

int compare(int **a, int **b) {
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				for (int k = i; k < i + 3; k++) {
					a[k][j] = 1 - a[k][j];
					a[k][j + 1] = 1 - a[k][j + 1];
					a[k][j + 2] = 1 - a[k][j + 2];
				}
				cnt++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] != b[i][j])
				return -1;

	return cnt;
}

int main() {
	int **changeMatrix, **fixMatrix;
	cin >> n >> m;

	changeMatrix = new int*[n + 1];
	fixMatrix = new int*[n + 1];
	for (int i = 0; i < n; i++) {
		changeMatrix[i] = new int[m + 1];
		fixMatrix[i] = new int[m + 1];
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf_s("%1d", &changeMatrix[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf_s("%1d", &fixMatrix[i][j]);

	printf("%d\n", compare(changeMatrix, fixMatrix));

	for (int i = 0; i < n; i++) {
		delete[] changeMatrix[i];
		delete[] fixMatrix[i];
	}
	delete[] changeMatrix;
	delete[] fixMatrix;
	return 0;
}