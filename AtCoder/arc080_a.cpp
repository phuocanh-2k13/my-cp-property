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
    int dvf = 0, dvt = 0, dvn = 0;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        if (x % 4 == 0) dvf++;
        else if (x % 2 == 0) dvt++;
        else dvn++;
    }

    dvf += dvt / 2;
    if (n / 2 <= dvf) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
