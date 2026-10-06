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

    ll n, q; cin >> n >> q;
    vll arr(n + 1); for (int i = 1; i <= n; i++) cin >> arr[i];
    
    vll diffQ(n + 2);
    while (q--) {
        ll x, y; cin >> x >> y;
        diffQ[x]++;
        diffQ[y + 1]--;
    }

    vector<pll> mapOfFreq;
    for (int i = 1; i <= n; i++) {
        diffQ[i] += diffQ[i - 1];
        if (diffQ[i] > 0) mapOfFreq.push_back({i, diffQ[i]});
    }

    sort(all(mapOfFreq), [](const pll& a, const pll& b){
        return a.second > b.second;
    });
    sort(all(arr), greater<int>());

    ll ans = 0;
    for (int i = 0; i < (int)mapOfFreq.size(); i++) {
        ans += arr[i] * mapOfFreq[i].second;
    }

    cout << ans << '\n';

    return 0;
}

