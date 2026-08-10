#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<int, int> freq;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			freq[x]++;
		}


		if (freq.size() == 1) cout << "YES\n";
		else if (freq.size() == 2) {
			int val1, val2;
			bool first = true;
			for (auto& [key, val] : freq) {
				if (first) {
					val1 = val;
					first = false;
				}
				else val2 = val;
			}

			if (val1 == val2 || val1 - 1 == val2 || val2 - 1 == val1) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}

	return 0;
}