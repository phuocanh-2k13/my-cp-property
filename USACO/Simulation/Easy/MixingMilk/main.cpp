#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector<int> c(3), m(3);
    for (int i = 0; i < 3; i++) {
        cin >> c[i] >> m[i];
    }

    int phase = 0;
    for (int i = 0; i < 100; i++) {
        if (phase == 0) {
            int amount = min(m[0], c[1] - m[1]);
            m[0] -= amount;
            m[1] += amount;
            phase++;
        } 
        else if (phase == 1) {
            int amount = min(m[1], c[2] - m[2]);
            m[1] -= amount;
            m[2] += amount;
            phase++;
        }
        else {
            int amount = min(m[2], c[0] - m[0]);
            m[2] -= amount;
            m[0] += amount;
            phase = 0;
        }
    }

    cout << m[0] << '\n' << m[1] << '\n' << m[2] << '\n';

    return 0;
}