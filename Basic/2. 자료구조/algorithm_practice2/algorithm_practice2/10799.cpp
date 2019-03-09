#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[100001];
	int len;
	int cnt = 0;
	int pipe = 0;

	cin >> arr;
	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] == '(')
			pipe++;
		else {
			pipe--;
			
			if (arr[i - 1] == '(')
				cnt += pipe;
			else
				cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}