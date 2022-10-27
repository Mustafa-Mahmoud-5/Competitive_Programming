#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>ar1 = {0};
	vector<int>ar2 = {0};
	vector<int>ar3 = {0};
	int len[3] = {0,0,0};
	int n; cin >> n;

	for(int i = 1; i <= n; i++) {
		int t; cin >> t;
		switch(t) {
			case 1:{
				ar1.push_back(i);
				len[0]++;
				break;
			}
			case 2: {
				ar2.push_back(i);
				len[1]++;
				break;
			}
			case 3: {
				ar3.push_back(i);
				len[2]++;
				break;
			}
		}	
	}

	// find team number by detecting the smallest formed group
	int teams = len[0];
	for(int i = 0; i < 3; ++i) {
		if(len[i] < teams) teams = len[i];
	}


	cout << teams << "\n";
	for(int i = 1; i <= teams; i++) {
		cout << ar1[i] << " " << ar2[i] << " " << ar3[i] << "\n";
	}
}

