#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, l, r, x;
	cin >> n >> l >> r >> x;
	vector<int> arr(n);
	for (auto& x : arr) cin >> x;
	sort(arr.begin(), arr.end());

	int numbOfSet = 0;
	for (int comb = 1; comb < (1 << n); comb++) {
		vector<int> setProblem;
		long long int totalDiffc = 0LL;
		for (int i = 0; i < n; i++) {
			if (comb & (1 << i)) {
				setProblem.push_back(arr[i]);
				totalDiffc += arr[i];
			}
		}

		if (setProblem[setProblem.size() - 1] - setProblem[0] >= x && setProblem.size() >= 2 && (totalDiffc >= l && totalDiffc <= r)) numbOfSet++;
	}

	cout << numbOfSet << '\n';

	return 0;
}