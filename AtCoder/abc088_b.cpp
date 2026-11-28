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
    vi arr(n); for (auto& x : arr) cin >> x;
    sort(all(arr));

    int al = 0;
    int be = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) al += arr[i];
        else be += arr[i];
    }

    cout << abs(al - be) << '\n';

    return 0;
}
