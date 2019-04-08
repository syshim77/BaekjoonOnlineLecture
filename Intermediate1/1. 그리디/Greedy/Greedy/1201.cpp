#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, k, *arr;
	cin >> n >> m >> k;
	arr = new int[n + 1];
	//vector<int> a(n);

	if (n < m + k - 1 || n > m*k) {
		cout << "-1" << '\n';
	}
	else {
		int cn = n;
		for (int i = 0; i < n; i++)
			arr[i] = i + 1;
		/*for (int i = 0; i < n; i++)
			a[i] = i + 1;*/

		vector<int> group;
		group.push_back(0);
		group.push_back(k);

		cn -= k;
		m--;
		int g = m == 0 ? 1 : cn / m;
		int r = m == 0 ? 0 : cn%m;
		for (int i = 0; i < m; i++) {
			group.push_back(group.back() + g + (r > 0 ? 1 : 0));
			if (r > 0)
				r--;
		}
		for (int i = 0; i < group.size() - 1; i++) {
			reverse(arr + group[i], arr + group[i + 1]);
			//reverse(a.begin() + group[i], a.begin() + group[i + 1]);
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		/*for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
		}*/
		cout << '\n';
	}

	delete[] arr;
	return 0;
}