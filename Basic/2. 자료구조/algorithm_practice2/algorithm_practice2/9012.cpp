#include <iostream>
#include <cstring>
using namespace std;

int t, cnt;
char s[51];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> t;

	while (t--) {
		cnt = 0;
		memset(s, 0, strlen(s));
		cin >> s;

		for (int i = 0; s[i]; i++) {
			if (s[i] == '(')
				cnt++;
			else
				cnt--;

			if (cnt < 0)
				break;
		}

		if (cnt == 0)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}