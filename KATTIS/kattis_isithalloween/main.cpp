#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string month;
    int date;
    cin >> month >> date;

    if ((month == "OCT" && date == 31 ) || (month == "DEC" && date == 25)) {
        cout << "yup\n";
    }
    else {
        cout << "nope\n";
    }

    return 0;
}