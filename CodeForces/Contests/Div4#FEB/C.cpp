#include <iostream>
#include <string>
using namespace std;
int main() {
	int t; cin >> t;
	for(int i = 1; i<=t; i++) {
		int n; cin >>n;
		string s; cin >>s;
		int p1= 0;
		int p2= n-1;
		int res = 0;
		while(p2 >= p1) {
			if(s[p1] == s[p2]) {
				res = p2 - p1 + 1;
				break;
			}
			p2--;
			p1++;
		}
		cout << res << "\n";
	}
}