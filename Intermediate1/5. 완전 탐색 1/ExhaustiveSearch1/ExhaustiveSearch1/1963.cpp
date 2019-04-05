#include <iostream>
using namespace std;

bool prime[10001];

void era() {
	for (int i = 2; i <= 10000; i++) {
		if (!prime[i])
			for (int j = i*i; j <= 10000; j += i)
				prime[j] = true;
	}
}

int main() {
	int tc, p1, p2;
	cin >> tc;
	era();

	while (tc--) {
		cin >> p1 >> p2;
		if (!prime[p1] || !prime[p2]) {
			cout << "Impossible" << '\n';
			continue;
		}

		for (int i = 0; i < 4; i++) {
			for (int j = 1; j <= 9; j++) {

			}
		}
	}

	return 0;
}