#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<float> petals(n);
	for (auto& x : petals) cin >> x;


	int numbOfPhotos = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			float total = 0;
			unordered_set<float> flowerInRange;
			// cout << "CASE: ";
			for (int k = i; k <= j; k++) {
				total += petals[k];
				flowerInRange.insert(petals[k]);
				// cout << petals[k] << ' ';
			}
			// cout << '\n';
			total /= (i != j ? (float)(j - i + 1) : 1);
			// cout << "AVERAGE: " << total << '\n';
			if (flowerInRange.count(total)) numbOfPhotos++;
		}
	}

	cout << numbOfPhotos << '\n';

	return 0;
}