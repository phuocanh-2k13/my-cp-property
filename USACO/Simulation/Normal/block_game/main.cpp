#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);

	int n; cin >> n;
	vector<vector<int>> freq;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		vector<int> aFreq(26), bFreq(26), mainFreq(26);
		for (auto& x : a) {
			aFreq[x - 'a']++;
		}
		for (auto& x : b) {
			bFreq[x - 'a']++;
		}

		for (int i = 0; i < 26; i++) {
			mainFreq[i] = max(aFreq[i], bFreq[i]);
		}

		freq.push_back(mainFreq);
	}

	vector<int> ans(26);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 26; j++) {
			ans[j] += freq[i][j];
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << ans[i] << '\n';
	}
	

	return 0;
}
