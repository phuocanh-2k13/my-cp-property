#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s; cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size() - 4; i++) {
		if (s.substr(i, 5) == "virus") {
			ans++;
			i += 4;
		}
	}

	cout << ans << '\n';

	return 0;
}