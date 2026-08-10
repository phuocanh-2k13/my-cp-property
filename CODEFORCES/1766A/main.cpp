#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int size = s.size();
		int ans = s[0] - '0';
		ans += (size - 1) * 9;
		cout << ans << '\n'; 
	}

	return 0;
}