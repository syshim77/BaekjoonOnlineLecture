#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	int n = s.size();
	vector<int> a;

	for (int i = 0; i<n; i++)
		a.push_back(i);

	sort(a.begin(), a.end(), [&s](int u, int v) {	// compare �Լ� �����Ͽ� ���������� ����
		return strcmp(s.c_str() + u, s.c_str() + v) < 0;
	});

	for (auto &x : a) {	// ���̻� ��� ���
		cout << s.substr(x) << '\n';	// x��°���� ������ ���
	}

	return 0;
}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string s;
//string s2;
//vector<char> v;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin >> s;
//
//	int len = s.size();
//	for (int i = 0; i < len; i++)
//		v.push_back(s[i]);
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len; j++) {
//			if (v[i] == s[j]) {
//				s2 = s.substr(j, len - j);
//				cout << s2 << '\n';
//			}
//			else
//				continue;
//		}
//	}
//
//	return 0;
//}