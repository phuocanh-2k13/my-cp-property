// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
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

    double p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    double maxPrice = 0;
    double ans = 0;
    for (int k = 1; k <= n; k++) {
        double price = p * (sin(a * k + b) + cos(c * k + d) + 2);
        ans = max(ans, maxPrice - price);
        maxPrice = max(maxPrice, price);
    }

    cout << fixed << setprecision(8) << ans << '\n';

    return 0;
}

