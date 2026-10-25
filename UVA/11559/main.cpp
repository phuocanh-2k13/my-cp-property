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

    int n, b, h, w;
    while (cin >> n >> b >> h >> w) {
        vector<pair<int, vi>> inp(h);
        for (int i = 0; i < h; i++) {
            int price; cin >> price;
            inp[i].first = price;
            for (int j = 0; j < w; j++) {
                int avai; cin >> avai;
                inp[i].second.push_back(avai);
            }
        } 

        int ans = INT_MAX;
        for (auto& [price, weeks] : inp) {
            for (int i = 0; i < w; i++) {
                if (weeks[i] >= n && n * price <= b) {
                    ans = min(ans, n * price);
                }
            }
        }

        if (ans == INT_MAX) cout << "stay home\n";
        else cout << ans << '\n';
    }

    return 0;
}

