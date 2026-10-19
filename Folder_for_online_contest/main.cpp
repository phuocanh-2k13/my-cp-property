#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int k; cin >> k;
    int t; cin >> t;
    vector<int> mapped;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mapped.push_back(x);
    }

    int buttons = 0;
    int now = 0;
    int i = 0;

    while (now < t) {
        auto it = lower_bound(mapped.begin() + i, mapped.end(), now);
        if (*it > now + k || )
    }

    cout << buttons << '\n';

    return 0;
}

