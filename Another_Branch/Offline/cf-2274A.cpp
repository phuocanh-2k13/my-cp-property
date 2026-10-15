#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

// MAIN IDEA: Trace back at the end to the beginning

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vll arr(n); for (auto& x : arr) cin >> x;
        ll x = 0;
        while (n--) {
            if (x <= arr[n]) {
                x += abs(arr[n] - x) * 2;
            }
            else {
                x -= abs(arr[n] - x) * 2;
            }
        }
        cout << (x / 2) << '\n';
    }

    return 0;
}