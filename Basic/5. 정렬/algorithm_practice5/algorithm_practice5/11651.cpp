#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n = 0;
	vector<pair<int, int>> v(n);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(y, x));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " " << v[i].first << '\n';
	}

	return 0;
}