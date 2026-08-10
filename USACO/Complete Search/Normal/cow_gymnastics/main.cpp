#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);

	int k, n; cin >> k >> n;
	unordered_map<int, vector<int>> rankOfCows;
	for (int session = 0; session < k; session++) {
		for (int rank = 0; rank < n; rank++) {
			int cow; cin >> cow;
			rankOfCows[cow].push_back(rank);
		}
	}

	int numberOfPairs = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			bool isChange = false;
			bool isBigger = (rankOfCows[i][0] > rankOfCows[j][0]);
			for (int session = 1; session < k; session++) {
				if ((rankOfCows[i][session] > rankOfCows[j][session]) != isBigger) {
					isChange = true;
					break;
				}
			}

			if (!isChange) {
				numberOfPairs++;
			}
		}
	}

	cout << numberOfPairs << '\n';

	return 0;
}