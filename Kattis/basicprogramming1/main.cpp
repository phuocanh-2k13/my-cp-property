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

    int n, t; cin >> n >> t;
    if (t == 1) cout << 7 << '\n';
    else if (t == 2) {
        int a, b; cin >> a >> b;
        if (a == b) cout << "Equal\n";
        else if (a > b) cout << "Bigger\n";
        else cout << "Smaller\n";
    }
    else if (t == 3) {
        vi arr(3); for (auto& x : arr) cin >> x;
        sort(all(arr));
        cout << arr[1] << '\n';
    }
    else if (t == 4) {
        ll total = 0;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            total += x;
        }
        cout << total << '\n';
    }
    else if (t == 5) {
        ll total = 0;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            total += (x % 2 ? 0 : x);
        }
        cout << total << '\n';
    }
    else if (t == 6) {
        string s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            x %= 26;
            s += ('a' + x);
        }
        cout << s << '\n';
    }
    else {
        vi arr(n);
        vector<bool> visited(n);
        for (auto& x : arr) {
            cin >> x;
        }

        int state = -1;
        int i = 0;
        while (state < 0) {
            if (arr[i] >= n) {
                state = 0;
                break;
            } 
            else if (arr[i] == n - 1) {
                state = 1;
                break;
            }
            else if (visited[i]) {
                state = 2;
                break;
            }
            visited[i] = true;
            i = arr[i];
        }

        switch (state) {
        case 0:
            cout << "Out\n";
            break;

        case 1:
            cout << "Done\n";
            break;

        case 2:
            cout << "Cyclic\n";
            break;
        }
    }
    

    return 0;
}

