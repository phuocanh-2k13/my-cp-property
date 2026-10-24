// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
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
    vll priceTea(n); for (auto& x : priceTea) cin >> x;
    int m; cin >> m;
    vll priceTopping(m); for (auto& x : priceTopping) cin >> x;

    vll price(n, LLONG_MAX);
    for (int j = 0; j < n; j++) {
        int s; cin >> s;
        for (int i = 0; i < s; i++) {
            int y; cin >> y;
            price[j] = min(priceTea[j] + priceTopping[y - 1], price[j]);
        }
    }

    ll mini = *min_element(all(price));
    ll money; cin >> money;
    ll ans = money / mini;
    cout << (ans ? ans - 1 : 0) << '\n';

    return 0;
}

