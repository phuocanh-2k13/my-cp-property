#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    int initPos = 1;
    long long step = 0;

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        if (x >= initPos) {
            step += x - initPos;
            initPos = x;
        }
        else {
            step += n - initPos + x;
            initPos = x;
        }
    }

    cout << step << '\n';

    return 0;
}