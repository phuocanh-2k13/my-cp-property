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

    ll h, w, k; cin >> h >> w >> k;
    vector<string> bomb_map(h);

    for (ll i = 0; i < h; i++) {
        cin >> bomb_map[i];
    }

    // SEARCHING FOR ROWSPAN
    vll rowIdx;
    for (ll i = 0; i < h; i++) {
        if (bomb_map[i].find('#') == string::npos) {
            rowIdx.push_back(i);
        }
    }

    // SEARCHING FOR COWSPAN
    vll colIdx;
    for (ll i = 0; i < w; i++) {
        for (ll j = 0; j < h; j++) {
            if (bomb_map[j][i] != '#') {
                colIdx.push_back(i);
            }
        }
    }

    // MERGE SAFE CELL
    vector<pll> safeCells;
    for (ll i = 0; i < rowIdx.size(); i++) {
        for (ll j = 0; j < colIdx.size(); j++) {
            safeCells.push_back({i, j});
            cout << "DEBUG: " << i << ' ' << j << '\n';
        }
    }

    // CALCULATE HOW MANY CELL
    ll amt = ((ll)rowIdx.size() - (w - (ll)colIdx.size())) + ((ll)colIdx.size() - (ll)rowIdx.size());
    cout << amt << '\n';



    return 0;
}

