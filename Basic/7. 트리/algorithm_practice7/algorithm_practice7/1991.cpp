#include <iostream>
using namespace std;

int tree[50][2];

void preorder(int x) {
	if (x == -1)
		return;

	cout << (char)(x + 'A');
	preorder(tree[x][0]);
	preorder(tree[x][1]);
}

void inorder(int x) {
	if (x == -1)
		return;

	inorder(tree[x][0]);
	cout << (char)(x + 'A');
	inorder(tree[x][1]);
}

void postorder(int x) {
	if (x == -1)
		return;

	postorder(tree[x][0]);
	postorder(tree[x][1]);
	cout << (char)(x + 'A');
}

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		char x, y, z;
		cin >> x >> y >> z;

		x -= 'A';

		if (y == '.') {
			tree[x][0] = -1;
		}
		else {
			tree[x][0] = y - 'A';
		}

		if (z == '.') {
			tree[x][1] = -1;
		}
		else {
			tree[x][1] = z - 'A';
		}
	}

	preorder(0);
	cout << '\n';

	inorder(0);
	cout << '\n';

	postorder(0);
	cout << '\n';

	return 0;
}