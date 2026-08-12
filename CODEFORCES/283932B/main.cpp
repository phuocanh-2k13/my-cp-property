// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define mi map<int, int>
#define mll map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool f(double x, int k, const vll& arr) {
    ll count = 0;
    for (auto& a_i : arr) {
        count += (ll)a_i / x;
    }
    return count >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vll arr(n); ll maxL = INT_MIN;
    for (auto& x : arr) {
        cin >> x;
        maxL = max(maxL, x);
    }

    double l = 0, r = maxL;
    for (int i = 0; i <= 100; ++i) {
        double mid = (r + l) / 2.0;
        if (f(mid, k, arr)) {
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << fixed << setprecision(6) << l << '\n';

    return 0;
}