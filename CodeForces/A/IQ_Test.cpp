#include <iostream>
#include <map>
using namespace std;


int main () {
	char arr[4][4];
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	string res = "NO";
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
		map<char, int> fc;
			fc[arr[i][j]]++;
			fc[arr[i][j+1]]++;
			fc[arr[i+1][j]]++;
			fc[arr[i+1][j+1]]++;

			if((fc['#'] == 3 && fc['.'] == 1) || (fc['.'] == 3 && fc['#'] == 1) || (fc['.'] == 4) || (fc['#'] == 4)) {
				cout << "YES" << endl;
				return 0;			
			}	
		}
	}
	cout << "NO" << endl;
	return 0;
}