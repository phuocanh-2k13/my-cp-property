#include <bits/stdc++.h>
using namespace std;

bool isValid(pair<int, int>& thisPos, pair<int, int>& direction, vector<vector<int>>& maze, int A, int B) {
	int x = thisPos.first + direction.first, y = thisPos.second + direction.second;
	bool isSafe = false;
	if (x >= 0 && x < A && y >= 0 && y < B) {
		if (maze[x][y] == 0 || maze[x][y] == 2) isSafe = true;
	}

	return isSafe;
}
pair<int, int> plusPair(pair<int, int> base, pair<int, int> addi) {
	pair<int, int> ans;
	ans.first = base.first + addi.first;
	ans.second = base.second + addi.second;
	return ans;
}
char getDirection(pair<int, int>& thisDirec) {
	if (thisDirec.first == -1) return 'U';
	else if (thisDirec.second == 1) return 'R';
	else if (thisDirec.first == 1) return 'D';
	else return 'L';  
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b; cin >> a >> b;

	// GET MAZE
	vector<vector<int>> maze(a, vector<int>(b));
	pair<int, int> start;
	int numbOfPath = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			char x; cin >> x;
			if (x == '*') {
				maze[i][j] = 0;
				numbOfPath++;
			}
			else if (x == '.') maze[i][j] = 1;
			else {
				maze[i][j] = 2;
				start = {i, j};
			}
		}
	}

	// TYPE OF DIRECTION
	vector<pair<int, int>> direction = {
		{0, 1}, {1, 0}, {0, -1}, {-1, 0}
	};

	// FIND MAZE
	string ans = "";
	pair<int, int> thisPos = start;
	do {
		for (int i = 0; i < direction.size(); i++) {
			if (isValid(thisPos, direction[i], maze, a, b)) {
				pair<int, int> testNewPos = plusPair(thisPos, direction[i]);
				if ((maze[testNewPos.first][testNewPos.second] == 2 && !numbOfPath) || maze[testNewPos.first][testNewPos.second] == 0) {
					thisPos = testNewPos;
					maze[thisPos.first][thisPos.second] = 3;
					ans += getDirection(direction[i]);
					numbOfPath--;
					break;
				}
			}
		}
		
	} while (thisPos != start);

	cout << ans << '\n';

	return 0;
}