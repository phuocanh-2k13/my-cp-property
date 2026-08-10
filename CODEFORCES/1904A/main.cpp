#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int a, b, kx, ky, qx, qy;
		cin >> a >> b >> kx >> ky >> qx >> qy;

		set<pair<int, int>> knightAttackKing;
		set<pair<int, int>> knightAttackQueen;

		knightAttackKing.insert({kx + a, ky + b});
		knightAttackKing.insert({kx + (a * -1), ky + b});
		knightAttackKing.insert({kx + a, ky + (b * -1)});
		knightAttackKing.insert({kx + (a * -1), ky + (b * -1)});

		knightAttackQueen.insert({qx + a, qy + b});
		knightAttackQueen.insert({qx + (a * -1), qy + b});
		knightAttackQueen.insert({qx + a, qy + (b * -1)});
		knightAttackQueen.insert({qx + (a * -1), qy + (b * -1)});

		if (a != b) {
			knightAttackKing.insert({kx + b, ky + a});
			knightAttackKing.insert({kx + (b * -1), ky + a});
			knightAttackKing.insert({kx + b, ky + (a * -1)});
			knightAttackKing.insert({kx + (b * -1), ky + (a * -1)});

			knightAttackQueen.insert({qx + b, qy + a});
			knightAttackQueen.insert({qx + (b * -1), qy + a});
			knightAttackQueen.insert({qx + b, qy + (a * -1)});
			knightAttackQueen.insert({qx + (b * -1), qy + (a * -1)});
		}

		int ans = 0;
		for (auto& x : knightAttackKing) {
			if (knightAttackQueen.count(x)) ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}