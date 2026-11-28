#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;

    ll l = 0, curr = 0;
    ll ans = 0;
    for (int r = 0; r < n; r++) {
        curr += arr[r];
        while (curr >= k && l <= r) {
            curr -= arr[l];
            ans += n - r;
            l++;
        }
    }

    cout << ans << '\n';

    return 0;
}
