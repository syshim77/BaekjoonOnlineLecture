#include <iostream>
#include <algorithm>
using namespace std;

int length(bool *notWork, int channel) {
	if (channel == 0) {
		if (notWork[0])
			return 0;
		else
			return 1;
	}

	int len = 0;
	while (channel > 0) {
		if (notWork[channel % 10])
			return 0;

		len++;
		channel /= 10;
	}

	return len;
}

int main() {
	int n, m;
	bool *notWork;
	cin >> n >> m;
	notWork = new bool[m + 1];

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		notWork[a] = true;
	}

	int res = n - 100;
	if (res < 0)
		res = -res;

	for (int i = 0; i <= 1000000; i++) {
		int l = length(notWork, i);
		if (l > 0) {
			int press = i - n;
			if (press < 0)
				press = -press;
			if (res > l + press)
				res = l + press;
		}
	}

	cout << res << '\n';

	delete[] notWork;
	return 0;
}