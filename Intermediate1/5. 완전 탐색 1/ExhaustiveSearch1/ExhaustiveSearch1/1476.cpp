#include <iostream>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;

	int copyE = 1, copyS = 1, copyM = 1;

	for (int i=1;;i++) {
		if (copyE == e&&copyS == s&&copyM == m) {
			cout << i << '\n';
			break;
		}

		copyE++; copyS++; copyM++;

		if (copyE == 16)
			copyE = 1;
		if (copyS == 29)
			copyS = 1;
		if (copyM == 20)
			copyM = 1;
	}

	return 0;
}