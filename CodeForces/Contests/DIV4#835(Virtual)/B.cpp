#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >>t;
	while(t--) {
		int n; string s; cin >> n >> s;
		if(n > 1) {
			sort(s.rbegin(), s.rend());
		}
		int lrgst = (s[0] - 'a' + 1);
		cout << lrgst << "\n";
	}
}