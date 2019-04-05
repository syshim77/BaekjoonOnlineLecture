#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int l, c;

bool check(string password) {
	int len = password.size();
	int j = 0, m = 0;
	for (int i = 0; i < len; i++) {
		if (password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u') {
			m++;
		}
		else {
			j++;
		}
	}

	return m >= 1 && j >= 2;
}

void solve(char *alpha, string res, int idx) {
	if (res.size() == l && check(res)) {
		cout << res << '\n';
		return;
	}

	if (c == idx)
		return;

	solve(alpha, res + alpha[idx], idx + 1);
	solve(alpha, res, idx + 1);
}

int main() {
	char *alpha;

	cin >> l >> c;
	alpha = new char[c + 1];

	for (int i = 0; i < c; i++) {
		cin >> alpha[i];
	}

	sort(alpha, alpha + c);

	solve(alpha, "", 0);

	return 0;
}