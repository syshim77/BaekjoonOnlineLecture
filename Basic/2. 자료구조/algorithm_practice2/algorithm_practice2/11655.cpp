#include <iostream>
#include <string>
using namespace std;

string s;

int main() {
	ios_base::sync_with_stdio(false);
	getline(cin, s);

	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (65 <= s[i] && s[i] <= 90) {
			char ch = s[i] + 13;
			if ((s[i] + 13) > 90)
				ch = (s[i] + 13) % 90 + 64;
			
			cout << ch;
		}
		else if (97 <= s[i] && s[i] <= 122) {
			char ch = s[i] + 13;
			if ((s[i] + 13) > 122)
				ch = (s[i] + 13) % 122 + 96;
			
			cout << ch;
		}
		else
			cout << s[i];
	}
	cout << '\n';

	return 0;
}