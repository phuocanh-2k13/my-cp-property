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

vector<bool> sieve(1e6+5, true);
void initSieve() {
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i <= 1e6; i++) {
        if (!sieve[i]) continue;
        for (int j = i + i; j <= 1e6; j += i) {
            sieve[j] = false;
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    initSieve();

    string s; cin >> s;
    int base = 0;
    int primes = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] - 48 >= 0 && s[i] - 48 < 10) {
            base = base * 10 + (s[i] - 48);
        }
        else {
            primes += sieve[base];
            base = 0;
        }
    }

    primes += sieve[base];
    cout << primes << '\n';

    return 0;
}

