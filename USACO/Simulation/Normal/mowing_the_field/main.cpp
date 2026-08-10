#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("mowing.in", "r", stdin);	
	freopen("mowing.out", "w", stdout);

	int n; cin >> n;
	map<pair<int, int>, int> coor;
	int x = 0, y = 0;
	int currTime = 0;

	int maxT = INT_MAX;
	
	for (int i = 0; i < n; i++) {
		char d; int step;
		cin >> d >> step;
		for (int j = 0 ; j < step; j++) {
			if (d == 'N') y++;
			else if (d == 'S') y--;
			else if (d == 'E') x++;
			else if (d == 'W') x--;
			currTime++;
			
			if (coor.count({x, y})) {
				maxT = min(maxT, currTime - coor[{x, y}]);
			}			 
			coor[{x, y}] = currTime;
		}
	}

	cout << (maxT == INT_MAX ? -1 : maxT) << '\n';

	return 0;	
}
