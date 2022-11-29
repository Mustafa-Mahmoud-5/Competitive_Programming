#include <iostream>
#include <string>
using namespace std;
int main() {
	string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char r; cin >> r;
	string s; cin >>s;

	for(int i = 0; i < s.size(); i++) {
		int pos = keys.find(s[i]);
		if(r == 'L') {
			s[i]  = keys[pos + 1];
		} else if(r == 'R') {
			s[i] = keys[pos - 1];
		}
	}


	cout << s;
}