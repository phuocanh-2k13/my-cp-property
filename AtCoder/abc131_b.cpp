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

    ll n; cin >> n;
    ll l; cin >> l;

    vll arr(n + 1);
    ll sum = 0;
    ll mini = INT_MAX;
    for (int i = 1; i <= n; i++) {
        arr[i] = l + i - 1;
        mini = min(abs(arr[i]), mini);
        sum += arr[i];
    }
    cout << (sum > 0 ? sum - mini : sum + mini) << '\n';

    return 0;
}
