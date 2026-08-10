#include <bits/stdc++.h>
using namespace std;

struct Cow {
	int x, y;
	Cow (int xCoor, int yCoor) : x(xCoor), y(yCoor) {};
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	vector<Cow> nCow, eCow;
	for (int i = 0; i < n; i++) {
		char face; int x, y;
		cin >> face >> x >> y;
		if (face == 'N') nCow.emplace_back(x, y);
		else eCow.emplace_back(x, y);
	}

	for (auto& northC : nCow) {
		for (auto& eastC : eCow) {
			if (northC.x < eastC.x && northC.y > eastC.y) {
				int xDis = eastC.x - northC.x;
				int yDis = northC.y - eastC.y;
				if (xDis == yDis) continue; 
			}
		}
	}

	return 0;
}
