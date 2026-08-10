#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int ans = 0;
    for (auto& x : s) {
        if (isdigit(x)) ans++;
    }

    cout << ans << '\n';

    return 0;
}