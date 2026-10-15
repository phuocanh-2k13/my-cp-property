#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
        bool isOk = true;
        for (int j = i; j < i + k; j++) {
            if (s[j] == 'X') {
                isOk = false;
                break;
            }
        } 
        if (isOk) {
            ans++;
            for (int j = i; j < i + k; j++) {
                s[j] = 'X';
            } 
        }
    }

    cout << ans << '\n';

    return 0;
}