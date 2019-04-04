// string, cin, cout 쓰면 시간 초과 뜨는 문제
#include <cstdio>
#include <cstring>
using namespace std;

char s[200];

int main() {
	int m, x, ans = 0;
	scanf("%d", &m);

	while (m--) {
		scanf("%s", &s);

		if (!strcmp(s, "add")) {
			scanf("%d", &x);
			x--;
			ans |= (1 << x);
		}
		else if (!strcmp(s, "remove")) {
			scanf("%d", &x);
			x--;
			ans &= ~(1 << x);
		}
		else if (!strcmp(s, "check")) {
			scanf("%d", &x);
			x--;
			if (ans & (1 << x))
				printf("%d\n", 1);
			else
				printf("%d\n", 0);
		}
		else if (!strcmp(s, "toggle")) {
			scanf("%d", &x);
			x--;
			ans ^= (1 << x);
		}
		else if (!strcmp(s, "all")) {
			ans = (1 << 20) - 1;
		}
		else if (!strcmp(s, "empty")) {
			ans = 0;
		}
	}

	return 0;
}