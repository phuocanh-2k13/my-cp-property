#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--) {
        string name, firstBegan, dateOfBirth;
        int course, firstBeganYear, yearOfBirth;
        cin >> name >> firstBegan >> dateOfBirth >> course;


        firstBeganYear = stoi(firstBegan.substr(0, 4));
        yearOfBirth = stoi(dateOfBirth.substr(0, 4));


        if (firstBeganYear >= 2010 || yearOfBirth >= 1991) {
            cout << name << " eligible\n";
        }
        else if (course > 40) {
            cout << name << " ineligible\n";
        }
        else {
            cout << name << " coach petitions\n";
        }
    }

    return 0;
}