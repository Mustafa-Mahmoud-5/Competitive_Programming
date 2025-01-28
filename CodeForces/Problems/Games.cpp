// teams P 2 = teams * teams - 1
#include <iostream>
using namespace std;

int main () {
	int t; cin >> t;
	int arr[t][2];

	for(int i = 0; i < t; i++) {
		for(int j = 0; j < 2; j++) {
			int c; cin >> c;
			arr[i][j] = c;
		}
	}

	int c = 0;
	for(int i = 0; i < t-1; i++) {
		for(int j = i+1; j < t; j++) {
			// first game
			if(arr[i][0] == arr[j][1]) c++;

			// second game
			if(arr[j][0] == arr[i][1]) c++;
		}
	}
	cout << c;


}