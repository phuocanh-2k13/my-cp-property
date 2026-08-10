#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);

	string s; cin >> s;

	int crossed = 0;
	unordered_set<string> is_cross;
	for (int i = 0; i < s.size() - 1; i++) {
		string frag = s.substr(i, 2);
		if (is_cross.count(frag)) {
			crossed++;
		}
		else {
			is_cross.insert(frag);
		}
	}

	cout << crossed << '\n';

	return 0;
}