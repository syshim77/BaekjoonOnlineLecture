#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Score {
	int korean;
	int english;
	int math;
	string name;
};

bool compare(const Score &u, const Score &v) {
	if (u.korean != v.korean) {
		return u.korean > v.korean;
	}
	else {
		if (u.english != v.english)
			return u.english < v.english;
		else {
			if (u.math != v.math)
				return u.math > v.math;
			else {
				return u.name < v.name;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Score> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].name << "\n";
	}

	return 0;
}