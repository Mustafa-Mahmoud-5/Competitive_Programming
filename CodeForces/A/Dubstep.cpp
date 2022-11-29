#include <iostream>
#include <string>
using namespace std;
int main () {
	string s; cin >> s;
	s+="WUB";
	int p = 0;
	int len = s.length();
	string m = "";
	while (p<len-1) {
		int sp = s.find("WUB", p);
		if(sp-p != 0) m += (s.substr(p, sp - p) + " ");
		p = sp + 3;
	}

	cout << m;
}