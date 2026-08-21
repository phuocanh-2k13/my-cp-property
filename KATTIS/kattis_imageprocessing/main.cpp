#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int w, h, n, m;
	cin >> w >> h >> n >> m;

	vector<vector<int>> image(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> image[i][j];
		}
	}

	vector<vector<int>> kernel(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> kernel[i][j];
		}
	}

	// Processing
	// Loop through the height
	for (int i = 0; i < h - n + 1; i++) {
		for (int j = 0; j < w - m + 1; j++) {
			int total = 0;
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < m; l++) {
					total += image[i + k][j + l] * kernel[k][l];
				}
			}
			cout << total << ' ';
		}
		cout << '\n';
	}

	return 0;
}