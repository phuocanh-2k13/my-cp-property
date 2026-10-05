// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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

    int n, q; cin >> n >> q;
    vector<vll> counter(n + 2);
    while (q--) {
        ll l, r, x;
        cin >> l >> r >> x;
        counter[l].push_back(x);
        counter[r + 1].push_back(-x);
    }

    unordered_map<ll, ll> freq;
    for (int i = 1; i <= n; i++) {
        for (auto& x : counter[i]) {
            if (x > 0) freq[x]++;
            else {
                x *= -1;
                if (--freq[x] == 0) freq.erase(x);
            }
        }
        cout << freq.size() << ' ';
    }
    cout << '\n';

    return 0;
}

