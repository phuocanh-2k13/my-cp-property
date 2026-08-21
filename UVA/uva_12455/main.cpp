#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, p; cin >> n >> p;
		vector<int> arr(p);
		for (auto& x : arr) cin >> x;

		bool isOk = false;
		for (int comb = 0; comb < (1 << p); comb++) {
			int totalLength = 0;
			for (int i = 0; i < p; i++) {
				if (comb & (1 << i)) totalLength += arr[i];
			}
			if (totalLength == n) {
				isOk = true;
				break;
			}
		}

		cout << (isOk ? "YES\n" : "NO\n");
	}

	return 0;
}