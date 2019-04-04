#include <iostream>
#include <string.h>
using namespace std;

int n, m, loc_x, loc_y;
long long **bridge;

long long maxWeight(long long left, long long right) {
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;


	}

	return ans;
}

int main() {
	cin >> n >> m;

	bridge = new long long*[m + 1];
	for (int i = 0; i < m; i++) {
		bridge[i] = new long long[4];
		memset(bridge[i], 0, 4);
		
		int a, b, c;
		cin >> a >> b >> c;
		bridge[a][b] = c;
		bridge[b][a] = c;
	}

	long long res = maxWeight(1, );
	cout << res << '\n';

	for (int i = 0; i < m; i++) {
		delete[] bridge[i];
	}
	delete[] bridge;
	return 0;
}