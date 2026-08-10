#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long page = 4;
    long long cnt = 0;    

    while (true) {
        int digits = to_string(page).size(); 
        cnt += digits;
        if (cnt == N) {
            cout << page;
            break;
        }
        page++;
    }

    return 0;
}