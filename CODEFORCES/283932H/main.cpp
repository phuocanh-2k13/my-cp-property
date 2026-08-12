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

bool f(ll x, ll rb, ll rs, ll rc, ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll limit) {
    ll cost_b = max(0LL, x * rb - nb);
    ll cost_s = max(0LL, x * rs - ns);
    ll cost_c = max(0LL, x * rc - nc);

    ll totalCost = cost_b * pb + cost_s * ps + cost_c * pc;
    return totalCost <= limit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    ll rb = 0, rs = 0, rc = 0;
    for (auto& c : s) {
        if (c == 'B') rb++;
        else if (c == 'S') rs++;
        else rc++;
    }

    ll nb, ns, nc; cin >> nb >> ns >> nc;
    ll pb, ps, pc; cin >> pb >> ps >> pc;
    ll moneyLeft; cin >> moneyLeft;

    ll l = 0, r = 2*1e12;
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, rb, rs, rc, nb, ns, nc, pb, ps, pc, moneyLeft)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}