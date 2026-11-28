#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<bool> visited(1e5+5);
    visited[1] = true;
    int this_i = arr[1];
    bool ok = true;
    int step = 1;
    while (this_i != 2) {
        if (visited[this_i]) {
            ok = false;
            break;
        }

        visited[this_i] = true;
        step++;
        this_i = arr[this_i];
    }

    if (ok) cout << step << '\n';
    else cout << -1 << '\n';

    return 0;
}
