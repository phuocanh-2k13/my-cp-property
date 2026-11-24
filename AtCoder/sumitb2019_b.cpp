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
    bool isOk = false;
    for (int x = 1; x < 50000; x++) {
        if ((x * 108 / 100) == n) {
            cout << x << '\n';
            isOk=true;
            break;
        }
    }
    if (!isOk) cout << ":(" << '\n';

    return 0;
}
