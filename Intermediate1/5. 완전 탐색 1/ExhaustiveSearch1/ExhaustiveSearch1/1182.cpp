#include <iostream>
using namespace std;

int main() {
	int n, s, *part;
	cin >> n >> s;
	part = new int[n + 1];

	for (int i = 0; i < n; i++)
		cin >> part[i];

	int res = 0;
	for (int i = 1; i < (1 << n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
			if (i&(1 << j))
				sum += part[j];

		if (sum == s)
			res++;
	}

	cout << res << '\n';

	delete[] part;
	return 0;
}