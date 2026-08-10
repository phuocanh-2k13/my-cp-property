#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a; cin >> a;
	long long int ans = 0;
	if (a.size() % 2 == 1) {
		for (int i = 0; i < (a.size() + 1) / 2; i++) {
			ans *= 10;
			ans += 4;
		}
		for (int i = (a.size() + 1) / 2; i < a.size() + 1; i++) {
			ans *= 10;
			ans += 7;
		}
		cout << ans << '\n';
	}
	else if ()
	for (int i = 0; i < a.size(); i++) {
		if (a[i] - 47 < 4)
	} 

	return 0;
}