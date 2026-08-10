#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> cards(n);
    for (auto& x : cards) cin >> x;

    int l = 0, r = n - 1;
    
    int a = 0, b = 0;
    bool turn = false;
    while (l <= r) {
        if (cards[l] > cards[r]) {
            if (turn) b += cards[l++];
            else a += cards[l++];
        }
        else {
            if (turn) b += cards[r--];
            else a += cards[r--];
        }

        turn = !turn;
    }

    cout << a << ' ' << b;

    return 0;
}