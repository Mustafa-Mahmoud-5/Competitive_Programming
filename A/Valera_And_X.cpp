#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n; cin >> n;
	string arr[n];

	// make matrix
	for(int i = 0; i < n; i++) {
		string x; cin >> x;
		arr[i] = x;
	}




	char diag = arr[0][0];
	char rest = arr[0][1];


	if(diag == rest) {
		cout << "NO";
		return 0;
	}

	// cout << "Reached" << "\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			// cout << i << " " << j << "\n";


			// left diagonal check || right diagonal check
			if(i == j || i + j == n-1) {
				if(arr[i][j] != diag) {
					cout << "NO";
					return 0;
				}
			} else {
			// rest check (= rest)
				if(arr[i][j] != rest) {
					cout << "NO";
					return 0;
				}				
			}
		}
	}

	cout << "YES";
}