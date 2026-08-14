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

bool f(double x, const vector<pair<double, double>>& arr) {
    double l = -1e18;
    double r = 1e18;
    for (int i = 0; i < (int)arr.size(); i++) {
        l = max(l, arr[i].first - x * arr[i].second);
        r = min(r, arr[i].first + x * arr[i].second);
    }
    return l <= r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<double, double>> arr(n);
    for (auto& [x, y] : arr) cin >> x >> y;

    double ans = 0;
    double l = -1e9, r = 1e9;
    for (int i = 0; i < 100; i++) {
        double mid = (r + l) / 2;
        if (f(mid, arr)) {
            ans = mid;
            r = mid;
        }
        else {
            l = mid;
        }
    }

    cout << fixed << setprecision(7) << ans << '\n';

    return 0;
}