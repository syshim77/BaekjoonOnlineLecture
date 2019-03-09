#include <iostream>
using namespace std;

int main() {
	int n;
	int *arr;
	int c[11];

	cin >> n;
	arr = new int[n];

	c[0] = 0; c[1] = 1; c[2] = 2; c[3] = 4;

	for (int i = 4; i < 11; i++)
		c[i] = c[i - 1] + c[i - 2] + c[i - 3];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cout << c[arr[i]] << endl;
	}

	delete[] arr;

	return 0;
}