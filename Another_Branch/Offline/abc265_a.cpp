#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, n; cin >> x >> y >> n;
    if (y < x * 3) {
        cout << (n / 3) * y + (n % 3) * x << "\n";
    }
    else {
        cout << n*x << "\n";
    }

    return 0;
}