#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    if (n >= m) cout << "YES\n";
    else {
        bitset<1001> curr, next;
        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            int rem = val % m;

            next = curr;
            next |= (curr << rem);
            next |= (curr >> (m - rem));
            next.set(rem);

            if (next.test(0)) {
                cout << "YES" << "\n";
                return 0;
            }

            curr = next;
        }
        cout << "NO" << "\n";
    }

    return 0;
}