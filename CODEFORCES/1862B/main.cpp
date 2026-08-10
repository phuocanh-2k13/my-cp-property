#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		int sz = 0;
		string ans = "";
		for (int i = 0; i < n; i++) {
			if (!i) {
				ans.append(to_string(arr[i]));
				ans += ' ';
				sz++;
			}
			else if (arr[i - 1] > arr[i]) {
				ans.append(to_string(arr[i])); 
				ans += ' '; 
				ans.append(to_string(arr[i])); 
				ans += ' ';
				sz += 2;
			}
			else {
				ans.append(to_string(arr[i]));
				ans += ' ';
				sz++;
			}	
		}
		cout << sz << '\n' << ans << '\n';
	}

	return 0;
}