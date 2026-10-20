#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sizeOfCode; cin >> sizeOfCode;
    string given, guess; cin >> given >> guess;

    unordered_map<char, int> seenGiven, seenGuess;

    int r = 0, s = 0;
    for (int i = 0; i < sizeOfCode; i++) {
        if (given[i] == guess[i]) {
            r++;
        }
        else {
            seenGiven[given[i]]++;
            seenGuess[guess[i]]++;
        }
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        if (seenGiven[c] && seenGuess[c]) {
            s += min(seenGiven[c], seenGuess[c]);
        }
    }
    cout << r << ' ' << s << '\n';

    return 0;
}