#include <iostream>
using namespace std;

int Max(int a, int b) {
	int c;

	while (1) {
		c = a%b;
		if (c == 0)
			return b;
		a = b;
		b = c;
	}
}

int main() {
	int T;
	int A[1000], B[1000];
	int max[1000], min[1000];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A[i];
		cin >> B[i];
	}

	for (int i = 0; i < T; i++) {
		max[i] = Max(A[i], B[i]);
		min[i] = A[i] * B[i] / max[i];
	}

	for (int i = 0; i < T; i++)
		cout << min[i] << endl;

	return 0;
}