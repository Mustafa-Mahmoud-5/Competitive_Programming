#include <iostream>
#include <string>
using namespace std;

int main() {
	int t; cin >>t;
	for(int i = 1; i<= t; i++) {
		int x = 0;
		int y = 0;
		int n; cin >> n;
		string s; cin >> s;
		string res = "NO";
		for(char c: s) {
			if(c == 'U') {
				y++;
			} else if(c == 'D') {
				y--;
			} else if(c == 'R') {
				x++;
			} else if(c == 'L') {
				x--;
			}


			if(x == 1 && y == 1) {
				res = "YES";
				break;
			}
		}
		cout << res << "\n";
	}
}