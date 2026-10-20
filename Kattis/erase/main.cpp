#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    
    bool succeed = true;
    if (n % 2 == 0) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                succeed = false;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) {
                succeed = false;
                break;
            }
        }
    }

    if (succeed) cout << "Deletion succeeded\n";
    else cout << "Deletion failed\n";

    return 0;
}