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

    ll a, b, c; cin >> a >> b >> c;
    ll bcnn = lcm(a, lcm(b, c));
    ll power_x = bcnn;
    while (power_x % a || power_x % b || power_x % c) {
        power_x += bcnn;
    }

    cout << sqrt(power_x) << '\n';

    return 0;
}

