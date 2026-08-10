#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	const long long int MODULO = 1e9 + 7;

	long long int finalRes = 1;
	for (int i = 0; i < n; i++) {
		finalRes *= 2;
		finalRes %= MODULO;
	}

	cout << finalRes << '\n';

	return 0;
}