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
    vector<int> arr(n); for (auto& x : arr) { cin >> x; }

    sort(all(arr));
    
    int r = 0;
    int ans = 0;
    for (int l = 0; l < n; l++) {
        while (arr[r] < arr[l] + m && r < n) {
            r++;
        }
        ans = max(r - l, ans);
    }

    cout << ans << '\n';

    return 0;
}