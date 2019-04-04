#include <iostream>
using namespace std;

int n, *postorder, *inorder, *inPosition;

void toPreorder(int ps, int pe, int is, int ie, int idx) {
	int root = postorder[pe];
	int inRoot = inPosition[root];
	
	cout << root << " ";

	if ((inRoot - is) != 0) {
		toPreorder(ps, ps + (inRoot - is) - 1, is, inRoot - 1, idx + 1);
	}
	if ((ie - inRoot) != 0) {
		toPreorder(pe - (ie - inRoot), pe - 1, inRoot + 1, ie, idx + 1);
	}
}

int main() {
	cin >> n;
	postorder = new int[n + 1];
	inorder = new int[n + 1];
	inPosition = new int[n + 1];

	for (int i = 0; i < n; i++) {
		cin >> inorder[i];
		inPosition[inorder[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> postorder[i];
	}

	toPreorder(0, n - 1, 0, n - 1, 0);
	cout << '\n';

	delete[] postorder;
	delete[] inorder;
	return 0;
}