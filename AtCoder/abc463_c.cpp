#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> h(n), l(n), suffMax(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> l[i];
    }
    suffMax[n - 1] = h[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffMax[i] = max(suffMax[i + 1], h[i]);
    }

    int q; cin >> q;
    while (q--) {
        int t; cin >> t;
        auto it = upper_bound(all(l), t);
        cout << suffMax[it - l.begin()] << '\n';
    }

    return 0;
}