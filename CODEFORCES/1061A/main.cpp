#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double n, s; cin >> n >> s;
	if (n >= s) cout << "1\n";
	else {
		int ans = ceil(s / n);
		cout << ans << '\n';
	}

	return 0;
}