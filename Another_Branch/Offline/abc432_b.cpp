#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x; cin >> x;
    vector<int> count(10);
    ll mini = INT_MAX;
    while (x) {
        ll dig = x % 10;
        x /= 10;
        count[dig]++;
        if (dig > 0) mini = min(dig, mini);
    }

    cout << mini;
    count[mini]--;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < count[i]; j++) cout << i;
    }
    cout << '\n';


    return 0;
}