#include <bits/stdc++.h>
using namespace std;

/*
	0 1 2 3 4 5 6 7 8 9
  0 - - - - - - - - - -
  1 - . . . . . . . . -
  2 - . _ _ _ _ _ _ . -
  3 - . _ . . . . _ . -
  4 - . _ . * * . _ . -
  5 - . _ . * * . _ . -
  6 - . _ . . . . _ . -
  7 - . _ _ _ _ _ _ . -
  8 - . . . . . . . . -
  9 - - - - - - - - - -

*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	vector<vector<int>> mapOfScore = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

	};

	int t; cin >> t;
	while (t--) {
		int totalScore = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				char c; cin >> c;
				if (c == 'X') {
					totalScore += mapOfScore[i][j];
				}
			}
		}
		cout << totalScore << '\n';
	}

	return 0;
}