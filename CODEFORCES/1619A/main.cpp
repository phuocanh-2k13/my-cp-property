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
		if (s.size() % 2 != 0) cout << "NO\n";		
		else {
			string a = s.substr(0, s.size() / 2);
			string b = s.substr(s.size() / 2, s.size());
			//cout << "DEBUG: " << a << ' ' << b << '\n';
			if (a == b) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}