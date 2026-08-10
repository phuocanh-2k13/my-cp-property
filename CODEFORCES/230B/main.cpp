#include <bits/stdc++.h>
using namespace std;

bitset<10000010> p;
void sieve(int size) {
    p.set();
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= size + 1; i++) {
        if (p[i]) {
            for (long long j = 1LL * i * i; j <= size+1; j += i) {
                p[j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(1000000LL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        long long int x; cin >> x;
        long long int y = sqrt(x);

        if (y * y == x && p[y]) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}