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

    int n, k; cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans += min(x * 2, abs(k - x) * 2);
    }
    cout << ans << '\n';

    return 0;
}
