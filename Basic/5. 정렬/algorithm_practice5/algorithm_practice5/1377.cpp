#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n = 0;
	cin >> n;
	vector<pair<int, int> > v(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (cnt < v[i].second - i)
			cnt = v[i].second - i;
	}

	cout << cnt + 1 << '\n';

	return 0;
}