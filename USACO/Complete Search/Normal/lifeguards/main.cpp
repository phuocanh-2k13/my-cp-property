#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);

	int n; cin >> n;
	vector<pair<int, int>> shifts(n);
	for (auto& [x, y] : shifts) cin >> x >> y;

	// Use an int to checkpoint all place
	vector<unordered_set<int>> timeline(n);
	int total = 0;
	for (int i = 0; i < n; i++) {
		for (int j = shifts[i].first; j < shifts[i].second; j++) {
			timeline[i].insert(j);
			total++;
		}
	}

	// Contribute vs Uncontribute
	vector<int> uncontribute(n);
	for (int i = 0; i < n; i++) {
		vector<bool> contributed(1001, false);
		for (int j = 0; j < n; j++) {
			if (i != j) {
				for (auto& x : timeline[i]) {
					if (timeline[j].count(x) && !contributed[x]) {
						contributed[x] = true;
					}
					else if (!timeline[j].count(x)) {
						uncontribute[i]++;
					}
				}
			}		
		}
	}

	int minLoss = INT_MAX;
	for (int i = 0; i < n; i++) {
		minLoss = min(uncontribute[i], minLoss);
	}

	cout << (total - minLoss) << '\n';


	return 0;
}