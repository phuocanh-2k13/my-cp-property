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
    if (n >= 64) cout << 64 << '\n';
    else if (n >= 32) cout << 32 << '\n';
    else if (n >= 16) cout << 16 << '\n';
    else if (n >= 8) cout << 8 << '\n';
    else if (n >= 4) cout << 4 << '\n';
    else if (n >= 2) cout << 2 << '\n';
    else cout << 1 << '\n';

    return 0;
}
