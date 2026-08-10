#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n; cin >> n;
    vector<int> shells(3);
    for (int i = 0; i < 3; i++) shells[i] = i;

    vector<int> counter(3);
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--; b--; g--;

        swap(shells[a], shells[b]);

        counter[shells[g]]++;
    }

    cout << *max_element(counter.begin(), counter.end()) << '\n';

    return 0;
}