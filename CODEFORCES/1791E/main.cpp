// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int neg = 0;
        vll arr(n); 
        for (auto& x : arr) {
            cin >> x;
            if (x <= 0) neg++;
            x = abs(x);
        }

        sort(all(arr));

        ll ans = accumulate(all(arr), 0LL);
        if (neg & 1) ans -= 2 * arr[0];

        cout << ans << '\n';
    }

    return 0;
}

