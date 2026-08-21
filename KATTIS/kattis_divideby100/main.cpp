#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n, m; cin >> n >> m;
    string decimal, fullnumber;
    long long int sizeOfM = m.size() - 1;
    long long int sizeOfN_afterDel = n.size() - sizeOfM;
    if (sizeOfN_afterDel < 1) {
        if (sizeOfN_afterDel == 0) {
            decimal = n;
            fullnumber += '0';
        }
        else {
            for (long long int i = 0; i < abs(sizeOfN_afterDel); i++) {
                decimal.push_back('0');
            }
            decimal += n;
            fullnumber += '0';
        }
    }
    else {
        fullnumber = n.substr(0, sizeOfN_afterDel);
        decimal = n.substr(sizeOfN_afterDel, n.size());
        int decIdx = decimal.size() - 1;
        while (decimal[decIdx] == '0') {
            decIdx--;
            decimal.pop_back();
        }
    }
    cout << fullnumber << (!decimal.empty() ? '.' : ' ') << decimal << '\n';

    return 0;
}