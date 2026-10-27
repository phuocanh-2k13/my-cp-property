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
        ll total = 0;
        int n; cin >> n;
        vll arr(n);
        mll mapped;
        for (auto& x : arr) {
            cin >> x;
            total += x;
            mapped[x]++;
        }

        bool found = false;
        ll maximum = INT_MIN;
        int idx = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i - 1] > (double)(total) / 2.0) {
                found = true;
                cout << "majority winner " << i << '\n';
                break;
            }
            else {
                if (maximum < arr[i - 1]) {
                    maximum = max(maximum, arr[i - 1]);
                    idx = i;
                }
            }
        }

        if (!found) {
            if (mapped[maximum] == 1) cout << "minority winner " << idx << '\n';
            else cout << "no winner\n";
        }
    }
    
    return 0;
}