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
    vector<pair<ll, ll>> arr(n);
    for (auto& [x, y] : arr) cin >> y >> x;
    sort(all(arr));

    int curr_time = 0;
    bool isOk = true;
    for (auto& [x, y] : arr) {
        curr_time += y;
        if (curr_time > x) {
            isOk = false;
            break;
        } 
    }

    if (isOk) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
