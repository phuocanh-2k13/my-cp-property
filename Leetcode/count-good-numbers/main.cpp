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

class Solution {
public:
    int countGoodNumbers(long long n) {
        auto binpow = [&](long long y, long long x){
            long long res = 1;
            y %= (ll)(1e9+7);

            while (x > 0) {
                if (x & 1) {
                    res = (res * y) % (ll)(1e9+7);
                }
                y = (y * y) % (ll)(1e9+7);
                x >>= 1;
            }

            return (ll)(res % (ll)(1e9+7));
        };
        return (int)((binpow(5, (n+1) / 2) * binpow(4, n / 2)) % (ll)(1e9+7));
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution solution;
    cout << solution.countGoodNumbers(500) << '\n';

    return 0;
}

