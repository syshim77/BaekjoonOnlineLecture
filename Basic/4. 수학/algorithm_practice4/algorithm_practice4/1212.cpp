#include <iostream>
#include <string>
using namespace std;

string s;
int arr[3];

void change(int idx) {
	int a = s[idx] - '0';
	for (int i = 0; i < 2; i++) {
		arr[i] = a % 2;
		a /= 2;
	}
	arr[2] = a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> s;

	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[0] - '0' == 0) {
			cout << "0";
			break;
		}

		change(i);

		if (i == 0 && 2 <= s[0] - '0' && s[0] - '0' <= 3)
			cout << arr[1] << arr[0];
		else if (i == 0 && s[0] - '0' == 1)
			cout << arr[0];
		else
			cout << arr[2] << arr[1] << arr[0];
	}
	cout << '\n';

	return 0;
}