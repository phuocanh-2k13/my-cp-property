#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

	int n; cin >> n;
	int totalCow = 0;
	int cost = 0;
	vector<int> r(n);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		r[i] = x;
		totalCow += x;
		cost += x * i;
	}

	int ans = cost;
	for (int i = 0; i < n - 1; i++) {
		cost = cost - totalCow + r[i] * n;
		ans = min(cost, ans);
	}

	cout << ans << '\n';
	return 0;
}
