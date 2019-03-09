#include <iostream>
using namespace std;

int a, b, m, cnt;
int A[30], B[30];
long long decimal;

void convertToDecimal() {
	for (int i = 0; i < m - 1; i++) {
		decimal = decimal*a + A[i]*a;
	}
	decimal += A[m - 1];
}

void convertFromDecimal() {
	while (decimal >= b) {
		B[cnt] = decimal%b;
		decimal /= b;
		cnt++;
	}
	B[cnt] = decimal;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> a >> b >> m;
	
	for (int i = 0; i < m; i++)
		cin >> A[i];

	convertToDecimal();
	convertFromDecimal();

	for (int i = cnt; i >= 0; i--)
		cout << B[i] << " ";
	cout << '\n';

	return 0;
}