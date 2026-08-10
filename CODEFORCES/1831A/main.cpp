#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		for (auto& x : arr) {
			cout << (n + 1 - x) << ' ';
		}
		cout << '\n';
	}

	return 0;
}