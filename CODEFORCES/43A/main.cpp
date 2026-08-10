#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	string a = "??", b = "??";
	int as = 0, bs = 0;

	for (int i = 0; i < n; i++) {
		string x; cin >> x;
		if (a == "??" || x == a) {
			a = x;
			as++;
		}
		else if (b == "??" || x == b) {
			b = x;
			bs++;
		}
	}

	int ansMaxInt = max(as, bs);
	if (ansMaxInt == as) cout << a << '\n';
	else cout << b << '\n';

	return 0;
}