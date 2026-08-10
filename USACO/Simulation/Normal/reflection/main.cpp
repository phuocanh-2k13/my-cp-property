#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, u; cin >> n >> u;
	vector<string> matrix(n);
	for (auto& x : matrix) cin >> x;

	vector<pair<int, int>> coordinates(u);
	for (int i = 0; i < u; i++) cin >> coordinates[i].first >> coordinates[i].second;
	
	int sumCosts = 0;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2; j++) {
			int dot = 0, pound = 0;

			if (matrix[i][j] == '#') pound++;
			else dot++;

			if (matrix[i][n - j - 1] == '#') pound++;
			else dot++;
			
			if (matrix[n - i - 1][j] == '#') pound++;
			else dot++;

			if (matrix[n - i - 1][n - j - 1] == '#') pound++;
			else dot++;

			sumCosts += min(dot, pound);
		}
	}

	cout << sumCosts << '\n';
	for (auto& [r, c] : coordinates) {
		r--; c--;
	
		int i = min(r, n - r - 1);
		int j = min(c, n - c - 1);

		int costDot = 0, costPound = 0;

		if (matrix[i][j] == '#') costPound++;
		else costDot++;
		if (matrix[i][n - j - 1] == '#') costPound++;
		else costDot++;
		if (matrix[n - i - 1][j] == '#') costPound++;
		else costDot++;
		if (matrix[n - i - 1][n - j - 1] == '#') costPound++;
		else costDot++;

		int oldCost = min(costDot, costPound);

		if (matrix[r][c] == '#') { matrix[r][c] = '.'; costDot++; costPound--; }
		else { matrix[r][c] = '#'; costDot--; costPound++; }

		int newCost = min(costDot, costPound);

		sumCosts += newCost - oldCost;
		cout << sumCosts << '\n';		
	}

	return 0;
}
