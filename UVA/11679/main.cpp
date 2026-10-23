// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n;
    while (true) {
        cin >> b >> n;
        if (!b && !n) break;
        
        vll arr(b + 1);
        for (int i = 1; i <= b; i++) cin >> arr[i];

        vll pay(b + 1);
        vll get(b + 1);
        while (n--) {
            int x, y;
            ll v;
            cin >> x >> y >> v;
            pay[x] += v;
            get[y] += v;
        }

        bool isOk = true;
        for (int i = 1; i <= b; i++) {
            if (arr[i] + get[i] - pay[i] < 0) {
                isOk = false;
            }
        }

        cout << (isOk ? "S" : "N") << '\n';
    }

    return 0;
}

