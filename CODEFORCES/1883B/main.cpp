#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		string s; cin >> s;

		/*
		1 3 1
		abb
		*/

		bool isOk = false;

		unordered_map<char, int> freq;
		for (auto& x : s) freq[x]++;

		int oddCount = count_if(freq.begin(), freq.end(),
			[](const pair<char, int>& pair) {
				return pair.second % 2 == 1;
			}
		);

		if (oddCount <= k + 1) isOk = true;


		/*
		if (n == 1) isOk = true;
		else if (n == 2) {
			if (k == 1) isOk = true;
			else if (s[0] == s[1]) isOk = true;
		}
		else if (n - k == 1) isOk = true;
		else {
			unordered_map<char, int> freq;
			for (auto& x : s) freq[x]++;

			int countOfEvenParity = count_if(freq.begin(), freq.end(),
				[](const pair<char, int>& pair) {
					return pair.second % 2 == 0;
				}
			);

			cout << "DEBUG: " << countOfEvenParity << '\n';

			if (n % 2 == 0) {
				if ((n - k) % 2 == 0 && n - countOfEvenParity % 2 == 0) isOk = true;
				else if ((n - k) % 2 == 1 && n - countOfEvenParity % 2 == 1) isOk = true;
			}
			else {
				if ((n - k) % 2 == 0 && n - countOfEvenParity % 2 == 0) isOk = true;
				else if ((n - k) % 2 == 1 && n - countOfEvenParity % 2 == 1) isOk = true;
			}
		}
		*/

		cout << (isOk ? "YES\n" : "NO\n");
	}

	return 0;
}