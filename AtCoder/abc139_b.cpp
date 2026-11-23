#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    cout << (b - 1 + a - 2) / (a - 1) << '\n';

    return 0;
}
