#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		vector<int> arr;
		int maxOfArr = INT_MIN;
		for (int i = 0; i < 7; i++) {
			int x; cin >> x;
			maxOfArr = max(x, maxOfArr);
			arr.push_back(x);
		}

		int sumOfArr = 0;
		for (auto& x : arr) {
			if (x == maxOfArr) {
				sumOfArr += x;
				maxOfArr = INT_MIN;
			}
			else {
				sumOfArr += -x;
			}
		}

		cout << sumOfArr << '\n';

	}

	return 0;
}