// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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
        int n; cin >> n;
        vi arr(n + 1), selected(n + 1);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            arr[x]++;
            selected[x] = i;
        }

        int ans = -1;
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 1) {
                ans = selected[i];
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

