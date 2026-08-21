#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> arr(n);
	for (auto& x : arr) cin >> x;

	vector<int> prefMax(n), suffMin(n);
	
	// Find Prefix Max
	prefMax[0] = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > prefMax[i - 1]) prefMax[i] = arr[i];
		else prefMax[i] = prefMax[i - 1];
	}

	// Find Suffix Min
	suffMin[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] < suffMin[i + 1]) suffMin[i] = arr[i];
		else suffMin[i] = suffMin[i + 1];
	}

	// Find answer
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= prefMax[i] && arr[i] <= suffMin[i]) ans++;
	}

	cout << ans << '\n';

	return 0;
}