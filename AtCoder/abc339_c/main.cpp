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

    int n; cin >> n;
    ll init = 0;
    ll pass = 0;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        pass += x;
        if (pass < 0) {
            init += abs(pass);
            pass = 0;
        }
    }
    cout << pass << '\n';

    return 0;
}

