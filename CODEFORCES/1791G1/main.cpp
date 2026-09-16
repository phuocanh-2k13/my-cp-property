// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <ios>
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

    int t; cin >> t;
    while (t--) {
        int n, c; cin >> n >> c;
        vll arr(n);
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            arr[i] = x + i + 1;
        }
        sort(all(arr));

        int numbOfTeleporter = 0;
        for (int i = 0; i < n; i++) {
            if (c - arr[i] >= 0) {
                c -= arr[i];
                numbOfTeleporter++;
            }
            else {
                break;
            }
        }

        cout << numbOfTeleporter << '\n';
    }

    return 0;
}

