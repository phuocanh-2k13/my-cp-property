#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n; cin >> n;
	int nearest = INT_MAX;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		nearest = min(abs(x), nearest);
	}
	cout << nearest << '\n';

	return 0;
}