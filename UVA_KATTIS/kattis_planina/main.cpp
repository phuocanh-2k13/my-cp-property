#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int length = 1 << n;
    length++;
    cout << (length * length) << '\n';
    return 0;
}