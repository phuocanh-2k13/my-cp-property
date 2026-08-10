#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("ROBOT.INP", "r", stdin);
	freopen("ROBOT.OUT", "w", stdout);

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	/* NAIVE SOLUTION
	int ans = 0;
	while (x1 != x2 || y1 != y2) {
		if (x1 == x2) {
			if (y1 < y2) y1++;
			else y1--;
		}
		else if (y1 == y2) {
			if (x1 < x2) x1++;
			else x1--;
		}
		else {
			if (x1 < x2 && y1 < y2) {
				x1++;
				y1++;
			}
			else if (x1 < x2 && y1 > y2) {
				x1++;
				y1--;
			}
			else if (x1 > x2 && y1 < y2) {
				x1--;
				y1++;
			}
			else if (x1 > x2 && y1 > y2) {
				x1--;
				y1--;
			}
		}
		ans++;
	}
	*/

	int ans = max(abs(x1 - x2), abs(y1 - y2));

	cout << ans << '\n';

	return 0;
}