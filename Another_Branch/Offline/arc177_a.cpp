#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    bool isOk = true;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;

        while (f > 0 && x - 500 >= 0) {
            f--;
            x -= 500;
        }
        while (e > 0 && x - 100 >= 0) {
            e--;
            x -= 100;
        }
        while (d > 0 && x - 50 >= 0) {
            d--;
            x -= 50;
        }
        while (c > 0 && x - 10 >= 0) {
            c--;
            x -= 10;
        }
        while (b > 0 && x - 5 >= 0) {
            b--;
            x -= 5;
        }
        while (a > 0 && x - 1 >= 0) {
            a--;
            x -= 1;
        }

        if (x != 0) {
            isOk = false;
            break;
        }
    }

    if (isOk) cout << "Yes\n";
    else cout << "No" << "\n";

    return 0;
}