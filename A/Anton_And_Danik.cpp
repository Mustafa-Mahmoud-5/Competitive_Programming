#include <iostream>
#include <string>
using namespace std;

int main () {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int anton = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'A') {
			anton++;

	}
}

	if(anton > (n - anton)) {
		cout << "Anton";
	} else if((n-anton) > anton) {
		cout << "Danik";
	} else {
		cout << "Friendship";
	}

}