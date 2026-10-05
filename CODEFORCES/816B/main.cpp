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

#define MAX_RANGE 200001

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q; cin >> n >> k >> q;
    vll diffRep(MAX_RANGE);
    while (n--) {
        ll l, r; cin >> l >> r;
        diffRep[l]++;
        diffRep[r + 1]--;
    }

    for (int i = 1; i <= MAX_RANGE; i++) {
        diffRep[i] += diffRep[i - 1];
    }

    vll degRange(MAX_RANGE);
    for (int i = 1; i <= MAX_RANGE; i++) {
        degRange[i] = degRange[i - 1] + (diffRep[i] >= k);
    }


    while (q--) {
        ll a, b; cin >> a >> b;
        cout << (degRange[b] - degRange[a - 1]) << '\n';
    }

    return 0;
}

