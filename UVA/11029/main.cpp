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

ll binPow(ll a, ll b) {
    a %= 1000;
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % 1000;
        a = (a*a) % 1000;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll lastDig = binPow(n, k);

        double x = (double)(k) * log10(n);
        double frac = x - floor(x);
        ll firstDig = pow(10, frac + 2);

        cout << firstDig << "..." << setw(3) << setfill('0') << lastDig << '\n';
    }

    return 0;
}

