#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string check(bool zero, int sum, string s) {
	if (zero && sum % 3 == 0) {
		sort(s.begin(), s.end());
		reverse(s.begin(), s.end());
		return s;
	}

	return "-1";
}

int main() {
	int sum = 0;
	bool zero = false;
	string s;
	cin >> s;

	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '0')
			zero = true;

		sum += s[i] - '0';
	}
	
	cout << check(zero, sum, s) << '\n';

	return 0;
}