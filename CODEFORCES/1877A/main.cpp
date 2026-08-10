#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int nearlyTotalScore = 0;
		for (int i = 0; i < n - 1; i++) {
			int x; cin >> x;
			nearlyTotalScore += x;
		}
		cout << -nearlyTotalScore << '\n';
	}

	return 0;
}