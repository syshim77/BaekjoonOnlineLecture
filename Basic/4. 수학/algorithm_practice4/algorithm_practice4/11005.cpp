#include <iostream>
using namespace std;

int n, b, cnt;
char ch[100];

void revert(int n) {
	while (n >= b) {
		if (n%b < 10)
			ch[cnt] = n%b + '0';
		else
			ch[cnt] = n%b + 55;
		n /= b;
		cnt++;
	}

	if (n < 10)
		ch[cnt] = n + '0';
	else
		ch[cnt] = n + 55;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> b;

	revert(n);

	for (int i = cnt; i >= 0; i--)
		cout << ch[i];
	cout << '\n';

	return 0;
}