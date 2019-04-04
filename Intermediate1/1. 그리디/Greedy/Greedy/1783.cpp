#include <iostream>
#include <algorithm>
using namespace std;

int knight(int width, int height) {
	if (height == 1) {
		return 1;
	}
	else if (height == 2) {
		return min(4, (width + 1) / 2);
	}
	else {
		if (width < 7) {
			return min(4, width);
		}
		else {
			return width - 2;
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	cout << knight(m, n) << '\n';

	return 0;
}