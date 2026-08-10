#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (auto& x : arr) cin >> x;

		int k = -1;
		int numbOfTwo = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] == 2) numbOfTwo++;
			int afterNumbOfTwo = 0;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] == 2) afterNumbOfTwo++;
			}

			if (numbOfTwo == afterNumbOfTwo) {
				k = i+1;
				break;
			}
		}

		cout << k << '\n';

	}

	return 0;
}