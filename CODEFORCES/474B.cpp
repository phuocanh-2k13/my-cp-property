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
    vector<int> arr(n);
    for (auto& x : arr) cin >> x;

    vector<int> starts;
    int last_start = 0;
    int last_end = 0;
    for (auto& x : arr) {
        last_start = last_end + 1;
        last_end += x;
        starts.push_back(last_start);
    }

    int m; cin >> m;
    while (m--) {
        int q; cin >> q;
        auto it = upper_bound(all(starts), q);
        cout << (it - starts.begin()) << '\n';
    }

    return 0;
}