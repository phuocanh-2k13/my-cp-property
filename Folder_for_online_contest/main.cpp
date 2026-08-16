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

    int q; cin >> q;
    ll v; cin >> v;
    vector<pair<ll, ll>> chargerSlot;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            ll t, w; cin >> t >> w;
            chargerSlot.push_back({t, w});
        }
        else {
            ll t; cin >> t;            
            if (!chargerSlot.size()) cout << "-1\n";
            else {
                ll maxBattery = 0;
                ll pos = 0;
                for (int i = 0; i < chargerSlot.size(); i++) {
                    ll y = min(v, chargerSlot[i].second + t - chargerSlot[i].first);
                    if (y > maxBattery) {
                        pos = i;
                        maxBattery = y;
                    }
                }
                chargerSlot.erase(chargerSlot.begin() + pos);

                cout << maxBattery << '\n';
            }
        }
    }

    return 0;
}