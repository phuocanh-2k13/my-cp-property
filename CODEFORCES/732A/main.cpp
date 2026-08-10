#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k; cin >> n >> k;
	int x = 0;
	int i = 1;
	while (!x) {
		if ((n * i - k) % 10 == 0 || (n * i) % 10 == 0) x = i;
		else i++;
	}

	cout << x << '\n';

	return 0;
}