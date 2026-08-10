#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		long long int a, b; cin >> a >> b;
		long long int a_msb = __lg(a);
		long long int b_msb = __lg(b);

		if (a == b) cout << 0 << '\n';
		else if (b_msb > a_msb) cout << -1 << '\n';
		else {
			int x = b ^ a;
			if (x ^ a == b && x < a) cout << 1 << '\n' << x << '\n';
			else {
				long long int fullNumb = (1LL << (a_msb + 1)) - 1;

				// FIND THAT TWO
				long long int x1 = fullNumb ^ a;
				long long int x2 = fullNumb ^ b;

				// PRINT ANS
				cout << 2 << '\n' << x1 << ' ' << x2 << '\n';
			}
		}
	}

	return 0;
}