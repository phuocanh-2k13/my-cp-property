#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;

		int ans = INT_MAX;
		for (int x = a; x <= b; x++) {
			int equation = (x - a) + (b - x);
			if (equation >= 0) {
				ans = min(ans, equation);
			}
		}

		cout << ans << '\n';
	}

	return 0;
}