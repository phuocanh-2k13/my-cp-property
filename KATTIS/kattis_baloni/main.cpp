#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> ballon(n);
    for (auto& x : ballon) cin >> x;

    int usedArrow = 0;
    vector<int> arrows(n);
    for (int i = 0; i < ballon.size(); i++) {
        if (arrows[ballon[i] - 1] != 0) {
            arrows[ballon[i] - 1]--;
            if (ballon[i] > 1) {
                arrows[ballon[i] - 2]++;
            }
            
        }
        else {
            if (ballon[i] != 1) {
                arrows[ballon[i] - 2]++;
            }
            usedArrow++;
        }
    }

    cout << usedArrow << '\n';

    return 0;
}