#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

constexpr ll MOD = 998244353;

ll amtOfNumb(ll k, int remainder) {
	return (remainder == 3 ? 1LL : 0LL) + (k >= remainder ? (k - remainder) / 4 + 1 : 0);
}

void solve(ll n, ll x) {
	ll limit_left = x - 1;
	ll ans = 0;

	// GROUP 0
	ll left_rem3 = amtOfNumb(limit_left, 3) % MOD;
	ll right_rem3 = (amtOfNumb(n, 3) - left_rem3) % MOD;
	ans += (left_rem3 * right_rem3);

	// GROUP 1
	ll left_rem1 = amtOfNumb(limit_left, 1) % MOD;
	ll right_rem1 = (amtOfNumb(n, 1) - left_rem1) % MOD;
	ans += (left_rem1 * right_rem1);

	ans %= MOD;

	cout << ans << '\n';

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n, x; cin >> n >> x;
		solve(n, x);
	}

	return 0;
}