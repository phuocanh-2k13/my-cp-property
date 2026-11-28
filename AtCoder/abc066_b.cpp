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

    string s; cin >> s;
    int n = s.size();
    int start = (n % 2 == 0 ? n - 2 : n - 1);
    for (int i = start; i>= 2;i-=2) {
        if (s.substr(0, i/2) == s.substr(i/2, i/2)) {
            cout << i << '\n';
            return 0;
        }
    }

    return 0;
}
