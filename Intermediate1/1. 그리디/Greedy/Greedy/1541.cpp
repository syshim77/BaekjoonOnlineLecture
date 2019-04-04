#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	string s;
	queue<int> n;
	queue<char> op;
	cin >> s;

	int len = s.length();
	int num = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '+' || s[i] == '-') {
			op.push(s[i]);
			n.push(num);
			num = 0;
		}
		else {
			num = num * 10 + (s[i] - '0');
		}
	}
	n.push(num);
	
	int res = n.front();
	n.pop();

	bool minus = false;
	while (!op.empty()) {
		char oper = op.front();
		op.pop();

		if (oper == '-') {
			minus = true;
		}

		if (minus) {
			int q = n.front();
			n.pop();
			res -= q;
		}
		else {
			int q = n.front();
			n.pop();
			res += q;
		}
	}
	cout << res << '\n';

	return 0;
}