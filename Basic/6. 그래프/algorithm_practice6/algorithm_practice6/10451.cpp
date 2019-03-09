#include <iostream>
#include <cstring>
using namespace std;

int tc, n;
int arr[1001];
bool check[1001];

void dfs(int node) {
	if (check[node])
		return;

	check[node] = true;

	dfs(arr[node]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> tc;

	while (tc--) {
		memset(arr, 0, n);
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			check[i] = false;
		}

		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				dfs(i);
				cnt++;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}