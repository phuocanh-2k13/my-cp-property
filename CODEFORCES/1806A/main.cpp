#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (b > d) cout << "-1\n";
		else if (a + (d - b) < c) cout << "-1\n";
		else {
			int mvf = d - b;
			int mvs = (a + (mvf) - c);
			cout << (mvf + mvs) << '\n';
		}
	}

	return 0;
}