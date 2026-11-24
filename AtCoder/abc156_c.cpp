#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi arr(n); for (auto& x : arr) cin >> x;

    int min_sta = INT_MAX;
    for (int p = 1; p <= 100; p++) {
        int this_sta = 0;
        for (auto& x : arr) {
            this_sta += (x - p) * (x - p);
        }
        min_sta = min(this_sta, min_sta);
    }
    cout << min_sta << '\n';

    return 0;
}
