#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n; cin >> n;
    vector<int> pos(n), cow(n);
    for (auto& x : pos) cin >> x;
    for (auto& x : cow) cin >> x;

    vector<int> newCowPlace(n);
    for (int t = 0; t < 3; t++) {
        for (int i = 0; i < n; i++) {
            newCowPlace[i] = cow[pos[i] - 1];
        }
        cow = newCowPlace;
    }

    for (auto& x : newCowPlace) {
        cout << x << '\n';
    }

    return 0;
}