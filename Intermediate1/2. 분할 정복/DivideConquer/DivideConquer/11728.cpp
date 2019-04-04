#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, *res;
	cin >> n >> m;
	res = new int[n + m + 1];

	for (int i = 0; i < n+m; i++) {
		cin >> res[i];
	}

	sort(res, res + n + m);

	for (int i = 0; i < n + m; i++) {
		cout << res[i] << " ";
	}
	cout << '\n';

	delete[] res;
	return 0;
}