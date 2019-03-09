#include <iostream>
#include <string>
using namespace std;

int b, res;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> s >> b;

	int len = s.size();
	for (int i = 0; i < len - 1; i++) {
		if (65 <= s[i] && s[i] <= 90) {
			res = res*b + (s[i] - 55)*b;
		}
		else {
			res = res*b + (s[i] - '0')*b;
		}
	}

	if (65 <= s[len -1] && s[len - 1] <= 90) {
		res += s[len - 1] - 55;
	}
	else {
		res += s[len - 1] - '0';
	}

	cout << res << '\n';

	return 0;
}