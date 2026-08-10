#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, w; cin >> n >> w;
	vector<pair<int, int>> wAv;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		wAv.push_back({x, y});
	}

	int maxVal = 0;
	for (int mask = 0; mask < (1 << n); mask++) {
		int val = 0;
		int weight = 0;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				weight += wAv[i].first;
				val += wAv[i].second;
			}
		}
		if (weight <= w) maxVal = max(maxVal, val);
	}

	cout << maxVal << '\n';

	return 0;
}