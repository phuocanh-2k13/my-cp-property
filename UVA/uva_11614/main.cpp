#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
       int a; cin >> a; 
       long long k = (-1 + sqrt(1 + 8.0 * a)) / 2;
       cout << k << '\n';
    }
    return 0;
}