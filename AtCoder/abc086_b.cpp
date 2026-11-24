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

    string a, b; cin >> a >> b;
    a += b;

    int v = stoi(a);
    bool isOk = false;
    for (int i = 2; i < 317; i++) {
        if (i * i == v) {
            isOk = true;
            cout << "Yes\n";
            break;
        }   
    } 

    if (!isOk) cout << "No\n";

    return 0;
}