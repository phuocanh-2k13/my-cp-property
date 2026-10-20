#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float sumQaly = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        float q, a;
        cin >> q >> a;
        sumQaly += q*a;
    }

    cout << sumQaly << '\n';

    return 0;
}