#include <iostream>
#include <string>
using namespace std;

string s;
int cnt[4];

int main() {
	ios_base::sync_with_stdio(false);

	while (getline(cin, s)) {
		cnt[0] = 0; cnt[1] = 0; cnt[2] = 0; cnt[3] = 0;
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (97 <= s[i] && s[i] <= 122) {
				cnt[0]++;
			}
			else if (65 <= s[i] && s[i] <= 90) {
				cnt[1]++;
			}
			else if (48 <= s[i] && s[i] <= 57) {
				cnt[2]++;
			}
			else {
				cnt[3]++;
			}
		}

		for (int i = 0; i < 4; i++) {
			cout << cnt[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}