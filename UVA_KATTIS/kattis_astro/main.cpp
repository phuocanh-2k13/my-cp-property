#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string timeA, timeB, disA, disB;
	cin >> timeA >> timeB >> disA >> disB;

	// EXTRACT TO INT
	pair<int, int> timeA_numb, timeB_numb, disA_numb, disB_numb;
	int timeA_prev, timeB_prev, disA_prev, disB_prev;
	for (int i = 0; i < timeA.size(); i++) {
		if (i == 0 || i == 3) {
			timeA_prev += (timeA[i] - '0') * 10;
			timeB_prev += (timeB[i] - '0') * 10;
			disA_prev += (disA[i] - '0') * 10;
			disB_prev += (disB[i] - '0') * 10;
		}
		else if (i == 1 || i == 4) {
			timeA_prev += (timeA[i] - '0');
			timeB_prev += (timeB[i] - '0');
			disA_prev += (disA[i] - '0');
			disB_prev += (disB[i] - '0');
		}

		if (i == 2) {
			timeA_numb.first = timeA_prev;
			timeB_numb.first = timeB_prev;
			disA_numb.first = disA_prev;
			disB_numb.first = disB_prev;

			timeA_prev = 0;
			timeB_prev = 0;
			disA_prev = 0;
			disB_prev = 0;

		}
		else if (i == 4) {
			timeA_numb.second = timeA_prev;
			timeB_numb.second = timeB_prev;
			disA_numb.second = disA_prev;
			disB_numb.second = disB_prev;
		}
	}


	

	return 0;
}