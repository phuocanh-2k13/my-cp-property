/*
IDEA:
- Get output in a matrix (vector<string>)
- Brute Force only 4 variables
	+ Check if one of two character == baseChar
	+ Sum them
*/
/*
OLD WRONG CODE (TOO COMPLEX)
	#include <bits/stdc++.h>
	using namespace std;

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);

		freopen("tttt.in", "r", stdin);
		freopen("tttt.out", "w", stdout);

		vector<string> tttBoard(3);
		for (int i = 0; i < 3; i++) {
			cin >> tttBoard[i];
		}

		vector<int> ans(2);

		if ((tttBoard[0][0] == tttBoard[1][1]) || (tttBoard[0][0] == tttBoard[2][2]) || (tttBoard[1][1] == tttBoard[2][2])) {
			if ((tttBoard[0][0] == tttBoard[1][1]) && (tttBoard[0][0] == tttBoard[2][2]) && (tttBoard[1][1] == tttBoard[2][2])) {
				ans[0]++;
			}
			else {
				ans[1]++;
			}
		}
		if ((tttBoard[0][1] == tttBoard[1][1]) || (tttBoard[0][1] == tttBoard[2][1]) || (tttBoard[1][1] == tttBoard[2][1])) {
			if ((tttBoard[0][1] == tttBoard[1][1]) && (tttBoard[0][1] == tttBoard[2][1]) && (tttBoard[1][1] == tttBoard[2][1])) {
				ans[0]++;
			}
			else {
				ans[1]++;
			}
		}
		if ((tttBoard[0][2] == tttBoard[1][1]) || (tttBoard[0][2] == tttBoard[2][0]) || (tttBoard[1][1] == tttBoard[2][0])) {
			if ((tttBoard[0][2] == tttBoard[1][1]) && (tttBoard[0][2] == tttBoard[2][0]) && (tttBoard[1][1] == tttBoard[2][0])) {
				ans[0]++;
			}
			else {
				ans[1]++;
			}
		}
		if ((tttBoard[1][0] == tttBoard[1][1]) || (tttBoard[1][0] == tttBoard[1][2]) || (tttBoard[1][1] == tttBoard[1][2])) {
			if ((tttBoard[1][0] == tttBoard[1][1]) && (tttBoard[1][0] == tttBoard[1][2]) && (tttBoard[1][1] == tttBoard[1][2])) {
				ans[0]++;
			}
			else {
				ans[1]++;
			}
		}

		cout << ans[0] << '\n' << ans[1] << '\n';

		return 0;
	}
*/

/*
	00 01 02
	10 11 12
	20 21 22
*/

// NEW CODE (SUGGEST)
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);

	vector<string> ttttBoard(3);
	for (auto& x : ttttBoard) cin >> x;

	vector<vector<pair<int, int>>> linesOfWin = {
		{{0, 0}, {0, 1}, {0, 2}},
		{{1, 0}, {1, 1}, {1, 2}},
		{{2, 0}, {2, 1}, {2, 2}},
		{{0, 0}, {1, 0}, {2, 0}},
		{{0, 1}, {1, 1}, {2, 1}},
		{{0, 2}, {1, 2}, {2, 2}},
		{{0, 0}, {1, 1}, {2, 2}},
		{{0, 2}, {1, 1}, {2, 0}}
	};

	set<char> soloWins;
	set<pair<char, char>> teamWins; 
	for (int i = 0; i < 8; i++) {
		set<char> checkEq;
		for (int j = 0; j < 3; j++) checkEq.insert(ttttBoard[linesOfWin[i][j].first][linesOfWin[i][j].second]);
		if (checkEq.size() == 1) soloWins.insert(*checkEq.begin());
		else if (checkEq.size() == 2) {
			auto it = checkEq.begin();
			teamWins.insert({*it, *(++it)});
		}
	} 

	cout << soloWins.size() << '\n' << teamWins.size() << '\n';

	return 0;
}
