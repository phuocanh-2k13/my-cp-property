#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int rating; cin >> rating;
        int div = 0;
        if (rating <= 1399) div = 4;
        else if (1400 <= rating && rating <= 1599) div = 3;
        else if (1600 <= rating && rating <= 1899) div = 2;
        else div = 1;

        cout << "Division " << div << '\n';
    }

    return 0;
}