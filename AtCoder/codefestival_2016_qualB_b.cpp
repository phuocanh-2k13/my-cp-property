#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b; cin >> n >> a >> b;
    int this_a = 0, this_b = 0;
    bool b_pass = true;
    bool a_pass = true;
    string s; cin >> s;
    for (auto& c : s) {
        if (c == 'c') cout << "No\n";
        else if (c == 'a') {
            if (this_a + this_b < a + b && a_pass) {
                this_a++;
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
                a_pass = false;
            }
        }
        else {
            if (this_a + this_b < a + b && this_b < b && b_pass) {
                this_b++;
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
                b_pass = false;
            }
        }
    }

    return 0;
}
