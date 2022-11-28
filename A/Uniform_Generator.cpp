#include <iostream>
#include <iomanip> 
#include <ctime>
#include <cstdlib>
#include <map>
using namespace std;
int main () {
	int step;
	while(cin >> step) {
		int mod; cin >> mod;
		map<int, bool> seq = {};
		int curr = 0;
		bool rep = false;
		for(int i = 1; i<=mod; ++i) {
			if(curr >= mod) curr %= mod;
			if(seq[curr]) {
				rep = true;
				break;
			}
			seq[curr] = true;
			curr+=step;
		}
		cout << setw(10) << step << setw(10) << mod << "    " <<  (rep ? "Bad Choice" : "Good Choice") << "\n";
		cout <<"\n";
	}
}