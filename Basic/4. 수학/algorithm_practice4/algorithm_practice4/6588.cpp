#include <iostream>
using namespace std;

const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX + 1]; // true: 지워진것 (소수가 아님), false: 지워지지 않음 (소수)

int main() {
	for (int i = 2; i <= MAX; i++) {
		if (check[i])
			continue;

		if (check[i] == false) {
			prime[pn++] = i;

			for (int j = i + i; j <= MAX; j += i)
				check[j] = true;
		}
	}

	while (true) {
		int n;
		cin >> n;

		if (n == 0)
			break;

		for (int i = 1; i < pn; i++) {
			if (check[n - prime[i]] == false) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
				break;
			}
		}
	}

	return 0;
}