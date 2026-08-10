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

		int ans = -1;
		for (int i = 0; i <= 256; i++) {
			int test = arr[0] ^ i;
			for (int j = 1; j < n; j++) {
				test = test ^ arr[j] ^ i;
			}
			if (!test) {
				ans = i;
				break;
			}  
		}
		cout << ans << '\n';
	}

	return 0;
}