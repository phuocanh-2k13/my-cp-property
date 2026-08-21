#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m; cin >> n >> m;
	vector<vector<char>> danceMap(m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char x; cin >> x;
			danceMap[j].push_back(x);
		}
	}

	char target = '_';
	int numberOfScene = 1;
	for (int i = 0; i < danceMap.size(); i++) {
		// Check if White SPACE COLUMN
		bool isColumn = all_of(danceMap[i].begin(), danceMap[i].end(), [target](char x) {
			return x == target;
		});

		if (isColumn) numberOfScene++;
	}
	cout << numberOfScene << '\n';

	return 0;
}