#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		long long int a, b, c; cin >> a >> b >> c;
		if (a > b) cout << "First\n";
		else if (b > a) cout << "Second\n";
		else {
			if (c % 2) cout << "First\n";
			else cout << "Second\n";
		}
	}

	return 0;
}