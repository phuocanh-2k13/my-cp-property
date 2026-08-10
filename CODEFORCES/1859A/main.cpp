#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (auto& x : a) cin >> x;
		
		int root = a[0];

		sort(a.begin(), a.end());
		
		if (a[0] == a[n - 1]) {
			cout << "-1\n";
			continue;
		}

		int it = 0;
		while (a[it] == a[0]) it++;
		cout << it << ' ' << (n - it) << '\n';
		for (int i = 0; i < it; i++) cout << a[i] << ' ';
		cout << '\n';
		for (int i = it; i < n; i++) cout << a[i] << ' ';
		cout << '\n';

	}	

	return 0;
}