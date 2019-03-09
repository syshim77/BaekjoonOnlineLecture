#include <iostream>
#include <cstring>
using namespace std;

bool chk;
char s[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> s;
	
	int len = strlen(s);
	for (int i = 97; i < 123; i++) {
		chk = false;
		for (int j = 0; j < len; j++) {
			if (i == s[j]) {
				cout << j << " ";
				chk = true;
				break;
			}
		}
		if (!chk)
			cout << "-1" << " ";
	}
	cout << '\n';

	return 0;
}