#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<ll> arr(n);
	ll totalSum = 0;
	for (auto& x : arr) {
		cin >> x;
		totalSum += x;
	}

	ll minDiff = INT_MAX;
	for (int mask = 0; mask < (1 << n); mask++) {
		ll sumGr1 = 0;
		ll sumGr2 = totalSum;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				sumGr1 += arr[i];
				sumGr2 -= arr[i];
			}
		}
		minDiff = min(minDiff, abs(sumGr1 - sumGr2));
	}

	cout << minDiff << '\n';

	return 0;
}