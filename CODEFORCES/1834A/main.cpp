#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int pos = 0, neg = 0;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x > 0) pos++;
			else neg++; 
		}

		int change = 0;
		while (!(neg % 2 == 0 && pos >= neg)) {
			neg--; pos++;
			change++;
		}

		cout << change << '\n';
	}

	return 0;
}