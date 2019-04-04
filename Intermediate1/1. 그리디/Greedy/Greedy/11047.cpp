#include <iostream>
using namespace std;

int main() {
	int n, k, cnt = 0;
	int *coin;
	cin >> n >> k;
	
	coin = new int[n + 1];
	for (int i = 0; i < n; i++)
		cin >> coin[i];

	for (int i = n - 1; i >= 0; i--) {
		cnt += k / coin[i];
		k %= coin[i];
	}

	cout << cnt << '\n';

	delete[] coin;
	return 0;
}