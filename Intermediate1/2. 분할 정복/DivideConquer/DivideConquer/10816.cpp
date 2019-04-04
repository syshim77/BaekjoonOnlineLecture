#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, *card, *know, *cnt;
	cin >> n;
	card = new int[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	sort(card, card + n);

	cin >> m;
	know = new int[m + 1];
	cnt = new int[m + 1];
	for (int i = 0; i < m; i++) {
		cin >> know[i];

		int *lower = lower_bound(card, card + n, know[i]);
		int *upper = upper_bound(card, card + n, know[i]);
		
		cnt[i] = upper - lower;
	}

	for (int i = 0; i < m; i++) {
		cout << cnt[i] << " ";
	}
	cout << '\n';

	delete[] card;
	delete[] know;
	delete[] cnt;
	return 0;
}