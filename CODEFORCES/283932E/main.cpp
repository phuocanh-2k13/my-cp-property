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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double c; cin >> c;
    double ans = 0;
    double l = 0, r = c;
    for (int i = 0; i < 100; i++) {
        double mid = (l + r) / 2;
        if ((mid * mid) + sqrt(mid) >= c) {
            r = mid;
        }
        else {
            l = mid;
        }

        if (i == 99) ans = mid;
    }

    cout << fixed << setprecision(8) << ans << '\n';

    return 0;
}