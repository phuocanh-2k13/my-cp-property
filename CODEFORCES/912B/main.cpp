#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long int n, k; cin >> n >> k;
	if (k == 1LL) cout << n << '\n';
	else {
		long long int msb_pos = __lg(n);
		long long int ans = (1LL << (msb_pos + 1)) - 1;

		cout << ans << '\n';
	}

	return 0;
}