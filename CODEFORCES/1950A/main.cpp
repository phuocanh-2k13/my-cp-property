#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a < b && b < c) cout << "STAIR";
		else if (a < b && b > c) cout << "PEAK";
		else cout << "NONE";

		cout << '\n'; 
	}

	return 0;
}