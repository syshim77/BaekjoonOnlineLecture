#include <iostream>
using namespace std;

int main() {
	int month;
	int day = 0;
	int last[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };

	cin >> month >> day;

	for (int i = 0; i < month; i++) {
		day += last[i];
	}

	switch (day % 7) {
	case 0:
		cout << "SUN" << '\n';
		break;
	case 1:
		cout << "MON" << '\n';
		break;
	case 2:
		cout << "TUE" << '\n';
		break;
	case 3:
		cout << "WED" << '\n';
		break;
	case 4:
		cout << "THU" << '\n';
		break;
	case 5:
		cout << "FRI" << '\n';
		break;
	case 6:
		cout << "SAT" << '\n';
		break;
	}

	return 0;
}