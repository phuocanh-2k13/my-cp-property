#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

	int limitDifference, numbOfDiamonds; cin >> numbOfDiamonds >> limitDifference;
	vector<int> diamonds(numbOfDiamonds);
	for (auto& x : diamonds) cin >> x;

	sort(diamonds.begin(), diamonds.end());

	int l = 0, maximumDiamondsBeShow = 0;
	for (int r = 0; r < numbOfDiamonds; r++) {
		while (diamonds[r] - diamonds[l] > limitDifference) l++;
		maximumDiamondsBeShow = max(maximumDiamondsBeShow, r - l + 1);
	}

	cout << maximumDiamondsBeShow << '\n';

	return 0;
}