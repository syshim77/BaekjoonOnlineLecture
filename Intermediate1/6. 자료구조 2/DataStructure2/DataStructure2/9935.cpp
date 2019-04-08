#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s, bomb;
	stack<char> st;
	bool check[1000001];
	cin >> s >> bomb;

	int len = s.length();
	int blen = bomb.length();
	if (blen == 1) {
		for (int i = 0; i < len; i++) {
			if (s[i] == bomb[0]) {
				check[i] = true;
			}
		}
	}
	for (int i = 0; i < len; i++) {

	}
}