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

    ll n, l, r; cin >> n >> l >> r;
    vll arr(n + 1); for (int i = 1; i <= n; i++) cin >> arr[i];

    bool isThereSpecial = false;

    for (int i = l; i <= r; i++) {
        // Extract digit and multiple
        ll multi = 1;
        ll tmp = arr[i];
        while (tmp) {
            multi *= tmp % 10;
            tmp /= 10;
        }

        if (!multi || arr[i] % multi) {
            continue;
        }
        else {
            cout << arr[i] << ' ';
            isThereSpecial = true;
        }
    }

    if (!isThereSpecial) cout << "-1";
    cout << '\n';

    return 0;
}

