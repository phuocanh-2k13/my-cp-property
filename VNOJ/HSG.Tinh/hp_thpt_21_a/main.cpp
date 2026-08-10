#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	getline(cin, s);
	string edited = "";
	for (auto& x : s) {
		if (isalpha(x)) edited += x;
	}
	cout << edited << '\n';

	return 0;
}