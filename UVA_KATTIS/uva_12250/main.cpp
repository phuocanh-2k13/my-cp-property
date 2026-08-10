#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int i = 1;
    while (cin >> a && a != "#") {
        cout << "Case " << i << ": ";
        if (a == "HELLO") cout << "ENGLISH\n";
        else if (a == "HOLA") cout << "SPANISH\n";
        else if (a == "HALLO") cout << "GERMAN\n";
        else if (a == "BONJOUR") cout << "FRENCH\n";
        else if (a == "CIAO") cout << "ITALIAN\n";
        else if (a == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
        else cout << "UNKNOWN\n";
        i++;
    }

    return 0;
}