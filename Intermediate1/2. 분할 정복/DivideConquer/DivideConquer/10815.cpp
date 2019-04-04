#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int *card, int left, int right, int n) {
	int mid = (left + right) / 2;
	while (left <= right) {
		if (n < card[mid]) {
			return binarySearch(card, left, mid - 1, n);
		}
		else if (n > card[mid]) {
			return binarySearch(card, mid + 1, right, n);
		}
		else if (n == card[mid]) {
			return 1;
		}
	}

	return 0;
}

int main() {
	int n, m, *card, *chk, *res;
	cin >> n;
	card = new int[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	sort(card, card + n);
	
	cin >> m;
	chk = new int[m + 1];
	res = new int[m + 1];
	for (int i = 0; i < m; i++) {
		cin >> chk[i];

		res[i] = binarySearch(card, 0, n - 1, chk[i]);
	}

	for (int i = 0; i < m; i++) {
		cout << res[i] << " ";
	}
	cout << '\n';

	delete[] card;
	delete[] chk;
	delete[] res;
	return 0;
}