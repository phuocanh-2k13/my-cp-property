#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		long long int n, k;
		cin >> n >> k;

		if (k == 1LL) cout << "YES\n";
		else if (n % 2LL == 0LL) cout << "YES\n";
		else {
			long long int check = gcd(2LL, k);
			if ((n / check) * check == n) cout << "YES\n";
			else cout <<  "NO\n";
		}
	}

	return 0;
}