#include <cstdio>
#include <ios>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y; cin >> x >> y;
    int phase = 1;
    int step = 0;
    int current = x;
    int direction = 1;
    while (true) {
        int next = x + (phase * direction);
        
        if ((current <= y && y <= next) || (current >= y && y >= next)) {
            step += abs(y - current);
            break;
        }

        step += abs(current - next);
        current = next;
        direction *= -1;
        phase *= 2;
    }

    cout << step << '\n';

    return 0;
}