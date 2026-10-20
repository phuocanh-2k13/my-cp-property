#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<float> actionAtTime(43200);
	for (int i = 0; i < n; i++) {
		float d, t;
		cin >> d >> t;

		actionAtTime[t]++;
		actionAtTime[t - d]++;
		actionAtTime[t - (d*2)]++;
	}

	cout << (ceil(*max_element(actionAtTime.begin(), actionAtTime.end()) / 2.0f)) << '\n';

	return 0;
}