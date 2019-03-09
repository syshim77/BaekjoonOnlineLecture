#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n, p;
string s;
stack<int> st;

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push") {
			cin >> p;
			st.push(p);
		}
		else if (s == "pop") {
			if (st.empty())
				cout << "-1" << '\n';
			else {
				int tmp = st.top();
				st.pop();
				cout << tmp << '\n';
			}
		}
		else if (s == "size") {
			cout << st.size() << '\n';
		}
		else if (s == "empty") {
			cout << st.empty() << '\n';
		}
		else {
			if (st.empty())
				cout << "-1" << '\n';
			else {
				int tmp = st.top();
				cout << tmp << '\n';
			}
		}
	}

	return 0;
}