#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Member {
	int age;
	string name;
};

bool compare(const Member &u, const Member &v) {
	return u.age < v.age;
}

int main() {
	ios_base::sync_with_stdio(false);
	int n = 0;
	cin >> n;
	vector<Member> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].age >> v[i].name;
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].age << " " << v[i].name << '\n';
	}

	return 0;
}