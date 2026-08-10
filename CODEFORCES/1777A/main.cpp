#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		int operations = 0;
		int passParity = arr[0] % 2;
		for (int i = 1; i < n; i++) {
			if (arr[i] % 2 == passParity) operations++;
			else passParity = arr[i] % 2;
		}

		cout << operations << '\n';
	}

	return 0;
}