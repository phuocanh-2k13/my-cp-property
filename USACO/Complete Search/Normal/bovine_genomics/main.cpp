#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);

	int n, m;
	cin >> n >> m;

	vector<string> spotty(n);
	vector<string> plain(n);
	for (auto& x : spotty) cin >> x;
	for (auto& x : plain) cin >> x;

	int spot = 0;
	for (int i = 0; i < m; i++) {
		bool check_valid[256] = {false};
		bool is_valid = true;
		for (int j = 0; j < n; j++) {
			check_valid[spotty[j][i]] = true;
		}

		for (int j = 0; j < n; j++) {
			if (check_valid[plain[j][i]]) {
				is_valid = false;
				break;
			}
		}

		if (is_valid) spot++;
	}

	cout << spot << '\n';

	return 0;
}