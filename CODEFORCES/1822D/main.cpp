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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        // O(n)
        if (n == 1) cout << "1\n";
        else if (n % 2 == 1) cout << "-1\n";
        else {
            int store = n;
            int lastOdd = -1;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    cout << store << ' ';
                    store -= 2;
                }
                else {
                    lastOdd += 2;
                    cout << lastOdd << ' ';
                }
            }
            cout << '\n';
        }

        /* O(n! / 2)
        if (n == 1) cout << "1 \n";
        else if (!(n % 2)) {
            vi arr(n); for (int i = 0; i < n; i++) arr[i] = i + 1;
            bool isOk = false;
            do {
                ll sBe4 = 0;
                vi arrP(n); unordered_set<int> check;
                bool isThere = true;
                for (int i = 0; i < n; i++) {
                    sBe4 += arr[i];
                    arrP[i] = (sBe4 % n) + 1;
                    if (check.count(arrP[i])) {
                        isThere = false;
                        break;
                    }
                    else {
                        check.insert(arrP[i]);
                    }
                }
                if (isThere) {
                    isOk = true;
                    break;
                }
            } while (next_permutation(all(arr)));

            if (!isOk) cout << "-1\n";
            else {
                for (auto& x : arr) {
                    cout << x << ' ';
                }
                cout << '\n';
            }
        }
        else {
            cout << "-1\n";
        }*/
    }

    return 0;
}

