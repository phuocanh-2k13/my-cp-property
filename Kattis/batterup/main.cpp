// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <iomanip>
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

    int n; cin >> n;
    int tmp = n;
    double total = 0;
    for (int i = 0; i < n; i++) {
        double x; cin >> x;
        if (x != -1) total += x;
        else tmp--;
    }

    double ans = total / tmp;
    cout << fixed << setprecision(20) << ans << '\n';

    return 0;
}

