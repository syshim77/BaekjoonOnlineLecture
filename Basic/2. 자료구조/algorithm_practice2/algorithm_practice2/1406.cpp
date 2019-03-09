#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n;
char order, p;
string s;
stack<char> l;
stack<char> r;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> s;
	cin >> n;

	for (int i = 0; s[i]; i++) {
		l.push(s[i]);
	}

	while (n--) {
		cin >> order;

		switch (order) {
		case 'L':
			if (l.empty())
				break;
			else {
				order = l.top();
				l.pop();
				r.push(order);
				break;
			}
		case 'D':
			if (r.empty())
				break;
			else {
				order = r.top();
				r.pop();
				l.push(order);
				break;
			}
		case 'B':
			if (l.empty())
				break;
			else {
				l.pop();
				break;
			}
		case 'P':
			cin >> p;
			l.push(p);
			break;
		}
	}

	int len = l.size();
	for (int i = 0; i < len; i++) {
		char tmp = l.top();
		l.pop();
		r.push(tmp);
	}

	len = r.size();
	for (int i = 0; i < len; i++) {
		char tmp = r.top();
		r.pop();
		cout << tmp;
	}
	cout << '\n';

	return 0;
}