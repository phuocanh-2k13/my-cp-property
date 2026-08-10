#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b; cin >> a >> b;
    int pOfTw = min(a, b);
    int pOfOn = (max(a, b) - pOfTw) / 2;

    cout << pOfTw << ' ' << pOfOn << '\n';

    return 0;
}