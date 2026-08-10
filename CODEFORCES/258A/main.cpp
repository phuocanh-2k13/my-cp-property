#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string bitStr; cin >> bitStr;
	int lastSize = bitStr.size();
	for (int i = 0; i < bitStr.size(); i++) {
		if (bitStr[i] == '0') {
			bitStr.erase(i, 1);
			break;
		}
	}

	if (bitStr.size() == lastSize) {
		bitStr.erase(0, 1);
	}
	
	cout << bitStr << '\n'; 

	return 0;
}