#include <iostream>
using namespace std;

int n;
int arr[10002];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[a]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (arr[i] > 0) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}