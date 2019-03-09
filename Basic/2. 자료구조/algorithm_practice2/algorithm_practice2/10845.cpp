#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, x;
string s;
queue<int> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push") {
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			if (q.empty())
				cout << "-1" << '\n';
			else {
				int tmp = q.front();
				q.pop();
				cout << tmp << '\n';
			}
		}
		else if (s == "size") {
			cout << q.size() << '\n';
		}
		else if (s == "empty") {
			cout << q.empty() << '\n';
		}
		else if (s == "front") {
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.front() << '\n';
		}
		else {
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.back() << '\n';
		}
	}

	return 0;
}