#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		long long n, k, x;
		cin >> n >> k >> x;

		long long minSumOfK = k * (k + 1) / 2;
		long long maxSumOfK = k * (2 * n - k + 1) / 2;

		cout << (minSumOfK <= x && maxSumOfK >= x ? "YES" : "NO") << '\n';
	}

	return 0;
}