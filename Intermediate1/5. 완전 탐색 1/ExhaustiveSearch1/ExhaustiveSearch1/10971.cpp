#include <iostream>
#include <algorithm>
using namespace std;

#define INF 987654321

int main() {
	int n, *d, **v, res = INF;
	cin >> n;
	d = new int[n + 1];
	v = new int*[n + 1];

	for (int i = 0; i < n; i++) {
		d[i] = i;
		v[i] = new int[n + 1];
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	}

	do {
		bool check = true;
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			if (v[d[i]][d[i + 1]] == 0)
				check = false;
			else
				sum += v[d[i]][d[i + 1]];
		}
		if (check && v[d[n - 1]][d[0]] != 0) {
			sum += v[d[n - 1]][d[0]];
			if (res > sum)
				res = sum;
		}
	} while (next_permutation(d, d + n));

	cout << res << '\n';

	for (int i = 0; i < n; i++)
		delete[] v[i];
	delete[] v;
	delete[] d;
	return 0;
}