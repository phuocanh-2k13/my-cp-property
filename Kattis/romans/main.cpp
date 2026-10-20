#include <bits/stdc++.h>
using namespace std;
int main() {
    double n = 0;
    cin >> n;

    long long int ans = round((n * (5280.f/4854.f)) * 1000);

    cout << ans << '\n';

    return 0;
}