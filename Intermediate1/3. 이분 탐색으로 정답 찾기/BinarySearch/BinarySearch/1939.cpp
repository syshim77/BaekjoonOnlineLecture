// 푸는 방법은 알겠는데 코드로 작성하는게 어려움
// 내가 코딩하는 스타일이랑 다른데 더 효과적인 방법이므로 분석 필수
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

vector<pair<int, int>> a[10001];
bool c[10001];
int n, m;
int st, ed;

bool go(int node, int limit) {
	if (c[node]) {
		return false;
	}
	c[node] = true;
	if (node == ed) {
		return true;
	}
	for (auto &p : a[node]) {
		int next = p.first;
		int cost = p.second;
		if (cost >= limit) {
			if (go(next, limit)) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	scanf("%d %d", &n, &m);
	while (m--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(make_pair(y, z));
		a[y].push_back(make_pair(x, z));
	}
	scanf("%d %d", &st, &ed);
	int left, right;
	left = 1;
	right = 1000000000;
	int ans = 0;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		memset(c, false, sizeof(c));
		if (go(st, mid)) {
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	printf("%d\n", ans);
	return 0;
}