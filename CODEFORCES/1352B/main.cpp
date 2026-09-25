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

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;

        int n1 = n - (k - 1);
        int n2 = n - 2 * (k - 1);
        if (n1 > 0 && n1 % 2 == 1) {
            cout << "YES\n";
            for (int i = 1; i <= k; i++) {
                if (i == k) cout << n << '\n';
                else {
                    cout << 1 << ' ';
                    n--;
                }
            }
        }
        else if (n2 > 0 && n2 % 2 == 0) {
            cout << "YES\n";
            for (int i = 1; i <= k; i++) {
                if (i == k) cout << n << '\n';
                else {
                    cout << 2 << ' ';
                    n -= 2;
                }
            }
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

