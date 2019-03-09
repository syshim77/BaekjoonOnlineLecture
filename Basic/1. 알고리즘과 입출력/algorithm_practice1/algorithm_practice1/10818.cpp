#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	cout << v[0] << " " << v[n - 1] << '\n';

	v.clear();

	return 0;
}