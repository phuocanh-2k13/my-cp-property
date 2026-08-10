#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int a_size, b_size;
		string a, b;
		cin >> a_size >> b_size >> a >> b;
		
		if (a == b) cout << "0\n";
		else if (a.find(b) != string::npos) {
			cout << "0\n";
		}
		else {
			bool isPrinted = false;
			for (int i = 0; i <= 5; i++) {
				if (a.find(b) != string::npos) {
					cout << i << '\n';
					isPrinted = true;
					break;
				}
				a += a;
			}
			if (!isPrinted) cout << "-1\n";
		}
	}
	return 0;
}