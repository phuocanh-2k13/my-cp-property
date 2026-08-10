#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;


		if (!is_sorted(arr.begin(), arr.end())) {
			cout << "0\n";
		}
		else {
			int minimumDistance = INT_MAX;
			for (int i = 1; i < n; i++) {
				minimumDistance = min(minimumDistance, arr[i] - arr[i - 1]);
			}

			minimumDistance /= 2;
			cout << (minimumDistance + 1) << '\n';
		}
		
	}

	return 0;
}