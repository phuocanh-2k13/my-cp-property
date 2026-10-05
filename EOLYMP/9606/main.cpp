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

ll solve(ll a, ll b, ll n) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % n;
        a = (a * a) % n;
        b >>= 1;
    }
    return res % n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, n; cin >> a >> b >> n;
    cout << ((a * solve(b, n - 2, n)) % n) << '\n';

    return 0;
}

