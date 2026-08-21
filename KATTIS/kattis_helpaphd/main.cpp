#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string a; cin >> a;
        if (a == "P=NP") cout << "skipped\n";
        else {
            string first = "", second = "";
            bool isFirst = true;
            for (char& c : a) {
                if (c == '+') {
                    isFirst = false;
                    continue;
                }
                
                if (isFirst) {
                    first += c;
                }
                else {
                }
            }

            int firstN = stoi(first);
            int secondN = stoi(second);

            cout << (firstN + secondN) << '\n';
        }
    }

    return 0;
}