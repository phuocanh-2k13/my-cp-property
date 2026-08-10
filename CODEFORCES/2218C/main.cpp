#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long int size = 3 * n;

		long long int nextMedian = 1;
		long long int tmpCalc = size;
		long long int reduce = 0;
		for (int i = 0; i < size; i++) {
			if (i != nextMedian) cout << (i + 1 - reduce) << ' ';
			else {
				cout << tmpCalc << ' ';
				tmpCalc--;
				reduce++;
				nextMedian += 3;
			}
		}
		cout << '\n';
	}

	return 0;
}