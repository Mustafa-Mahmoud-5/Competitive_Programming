#include <iostream>
#include <string>
using namespace std;

int main () {
	string cf = "codeforces";
	int n; cin >>n;
	for(int i = 1; i<=n; i++) {
		char c; cin >> c;
		string res = "NO";
		for(char l: cf) {
			if(l == c) {
				res = "YES";
				break;
		}
	}
		cout << res << "\n";
	}
}	