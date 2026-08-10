#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	/*
	DUMP SOLUTION
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		sort(arr.rbegin(), arr.rend());
		auto it = unique(arr.begin(), arr.end());

		bool isPossible = true;
		int sumBefore = 0;
		for (auto i = arr.begin(); i != arr.end(); i++) {
			if (i == arr.begin()) sumBefore += *i;
			else {
				if (*i == sumBefore) {
					isPossible = false;
					break;
				}
				else {
					sumBefore += *i;
				}				
			}
		}

		if (isPossible) {
			cout << "YES\n";
			for (auto i = arr.begin(); i != arr.end(); i++) cout << (*i) << ' ';
			cout << '\n';
		}
		else {
			cout << "NO\n";
		}
	}
	*/

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		sort(arr.begin(), arr.end());
		if (arr[0] == arr[n - 1]) cout << "NO\n";
		else {
			cout << "YES\n";
			if (arr[n - 1] != arr[1]) swap(arr[0], arr[n - 1]);
			for (auto& x : arr) {
				cout << (x) << ' ';
			}
			cout << '\n';
		}
	}

	return 0;
}