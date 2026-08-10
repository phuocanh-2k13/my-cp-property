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

		bool isOk = false;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i; j < n; j++) {
				if (gcd(arr[i], arr[j]) <= 2) {
					isOk = true;
					break;
				}
			}
		}

		cout << (isOk ? "YES\n" : "NO\n");
	}

	return 0;
}