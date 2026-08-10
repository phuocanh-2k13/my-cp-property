#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n, k, x;
		cin >> n >> k >> x;

		if (x == 1) {
			if (k == 1 || (k == 2 && n % 2 != 0) || n < 2) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
				if (n % 2 == 0) {
					cout << (n / 2) << '\n';
					for (int i = 0; i < n / 2; i++) cout << "2 ";
					cout << '\n';
				}
				else {
					if (n - 3 == 0) {
						cout << "1\n3\n";
					}
					else {
						if (5 == n) {
							cout << "2\n3 2\n";
						}
						else {
							cout << n / 2 << '\n';
							for (int i = 0; i < (n / 2) - 1; i++) cout << "2 ";
							cout << "3\n";
						}
					}
				}
			}
		}
		else {
			cout << "YES\n";
			cout << n << '\n';
			for (int i = 0; i < n; i++) cout << "1 ";
			cout << '\n';
		}
	}

	return 0;
}