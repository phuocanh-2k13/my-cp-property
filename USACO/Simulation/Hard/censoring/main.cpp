#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("censor.in", "r", stdin);
	freopen("censor.out", "w", stdout);

	string s, t; cin >> s >> t;
	vector<char> stackTrace;

	for (int i = 0; i < s.size(); i++) {
		stackTrace.push_back(s[i]);
		if (stackTrace.size() >= t.size()) {
			bool isOccur = true;
			for (int j = 0; j < t.size(); j++) {
				if (stackTrace[stackTrace.size() - t.size() + j] != t[j]) {
					isOccur = false;
					break;
				}
			}

			if (isOccur) {
				for (int j = 0; j < t.size(); j++)
					stackTrace.pop_back();
			}
		}
	}	

	for (int i = 0; i < stackTrace.size(); i++)
		cout << stackTrace[i];

	return 0;
}
