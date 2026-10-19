#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 1 || n == 2) {
            cout << -1 << '\n';
            ll tmp; 
            cin >> tmp;
            if (n == 2) cin >> tmp;
            continue;
        }
        
        // If WA, check this
        int halfN = n / 2;
        ll total = 0;
        vll arr;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            arr.push_back(x);
            total += x;
        }
        sort(all(arr));
        ll halfPop = arr[halfN];

        // If WA, check this
        ll l = 0, r = 1e18;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if ((total + mid) / n > halfPop) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << l << '\n';

    }

    return 0;
}