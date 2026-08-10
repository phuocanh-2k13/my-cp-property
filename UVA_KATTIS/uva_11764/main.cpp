#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int high = 0, low = 0;
        int walls; cin >> walls;
        int lastPass = 0;
        for (int j = 0; j < walls; j++) {
            int length; cin >> length;
            if (j) {
                if (lastPass > length) low++;
                else if (lastPass < length) high++;
            }
            lastPass = length;
        }

        cout << "Case " << i << ": " << high << " " << low << '\n';
    }

    return 0;
}