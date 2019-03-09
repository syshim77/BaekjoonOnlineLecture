#include <iostream>
#include <deque>
#include <string>
using namespace std;

int n, x;
string s;
deque<int> dq;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (s == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (s == "pop_front") {
			if (dq.empty())
				cout << "-1" << '\n';
			else {
				int tmp = dq.front();
				dq.pop_front();
				cout << tmp << '\n';
			}
		}
		else if (s == "pop_back") {
			if (dq.empty())
				cout << "-1" << '\n';
			else {
				int tmp = dq.back();
				dq.pop_back();
				cout << tmp << '\n';
			}
		}
		else if (s == "size") {
			cout << dq.size() << '\n';
		}
		else if (s == "empty") {
			cout << dq.empty() << '\n';
		}
		else if (s == "front") {
			if (dq.empty())
				cout << "-1" << '\n';
			else
				cout << dq.front() << '\n';
		}
		else {
			if (dq.empty())
				cout << "-1" << '\n';
			else
				cout << dq.back() << '\n';
		}
	}

	return 0;
}