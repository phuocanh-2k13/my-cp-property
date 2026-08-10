#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string code;
    cin >> code;

    string decode = "";
    for (int i = 0; i < code.size();) {
        if (code[i] == '.') {
            decode.push_back('0');
            i++;
        }
        else {
            if (code[i + 1] == '.') {
                decode.push_back('1');
            } 
            else {
                decode.push_back('2');
            }
            i += 2;
        }
    }

    cout << decode << '\n';

    return 0;
}