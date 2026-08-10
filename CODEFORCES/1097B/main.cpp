#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> arr(n);
	for (auto& x : arr) cin >> x;
		
	for (int masks = 0; masks < (1 << n); masks++) {
		int finalRes = 0;
		for (int i = 0; i < n; i++) {
			if (masks & (1 << i)) finalRes += arr[i];
			else finalRes -= arr[i];
		}
		finalRes = finalRes % 360;
		if (!finalRes) {
			cout << "YES\n";
			return 0;
		}
	}

	cout << "NO\n";
	return 0;
}