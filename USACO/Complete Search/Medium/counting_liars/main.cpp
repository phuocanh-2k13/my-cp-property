#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> L, G;
	for (int i = 0; i < n; i++) {
		char c; int x;
		cin >> c >> x;

		if (c == 'G') {
			G.push_back(x);
		}
		else if (c == 'L') {
			L.push_back(x);
		}
	}

	int maxTruth = 0;
	for (auto& x : L) {
		int currentTruth = 0;
		for (auto& y : L) { 
			if (x <= y) currentTruth++;
		}
		for (auto& y : G) { 
			if (x >= y) currentTruth++;
		}
		maxTruth = max(maxTruth, currentTruth);
	}
	for (auto& x : G) {
		int currentTruth = 0;
		for (auto& y : L) { 
			if (x <= y) currentTruth++;
		}
		for (auto& y : G) { 
			if (x >= y) currentTruth++;
		}
		maxTruth = max(maxTruth, currentTruth);
	}

	// RESULT
	int liar = n - maxTruth;
	cout << liar << '\n';

	return 0;
}