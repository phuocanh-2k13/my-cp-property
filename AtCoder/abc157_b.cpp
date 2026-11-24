#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vi> arr(3, vi(3));
    for (auto& x : arr) {
        for (auto& y : x) cin >> y;
    }

    vector<bool> m(101);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        m[b] = true;
    }

    bool isOk = false;
    for (auto& x : arr) {
        if (m[x[0]] && m[x[1]] && m[x[2]]) {
            isOk = true;
            break;
        }
    }

    if (!isOk) {
        for (int i = 0; i < 3; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (m[arr[j][i]]) count++;
            }
            if (count == 3) {
                isOk =true;
                break;
            }
        }
    }

    if (!isOk) {
        int count1 = m[arr[0][0]] + m[arr[1][1]] + m[arr[2][2]];
        int count2 = m[arr[0][2]] + m[arr[1][1]] + m[arr[2][0]];
        if (count1 == 3 || count2 == 3) isOk = true;
    }

    if (isOk) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}