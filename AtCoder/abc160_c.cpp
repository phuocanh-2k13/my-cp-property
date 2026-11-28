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

    ll k, n; cin >> k >> n;
    vi arr(n); for (auto& x : arr) cin >> x;

    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < n - 1; i++) {
        tmp += abs(arr[i + 1] - arr[i]);
    }
    ans = tmp;

    for (int i = 1; i < n; i++) {
        if (i == 1) {
            tmp += abs(k - arr[n - 1]) + arr[0];
            tmp -= arr[1] - arr[0];
        } else {
            tmp -= arr[i] - arr[i - 1];
            tmp += arr[i - 1] - arr[i - 2];
        }
        ans = min(ans, tmp);
    }
    cout << ans << '\n';

    return 0;
}
