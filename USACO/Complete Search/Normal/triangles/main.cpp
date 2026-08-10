#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

	int n; cin >> n;
	vector<pair<int, int>> coordinate(n);
	for (auto& [x, y] : coordinate) {
		cin >> x >> y;
	}

	int maximumArea = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (coordinate[i].second == coordinate[j].second && 
					coordinate[i].first == coordinate[k].first) {
					int area = abs(coordinate[j].first - coordinate[i].first) * 
								abs(coordinate[k].second - coordinate[i].second);
					maximumArea = max(maximumArea, area);
				}
			}
		}
	}

	cout << maximumArea << '\n';

	return 0;
}