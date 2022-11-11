#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	string w; cin >> w;
	bool left = true;
	string l = ""; string r = "";
	for(char c: s) {
		if(c == '|') {
			left = false;
			continue;
		}
		if(left) {
			l+=c;
		} else {
			r+=c;
		}
	}
	// PUT IN THE SMALLEST SIDE
	int ls = l.length(); int rs = r.length();
	int mn = min(ls, rs);	
	int i = 0;
	for(i; i < w.length(); ++i) {
		if(l.length() == r.length()) break;
		if(mn == ls) {
			l+=w[i];
		} else {
			r+=w[i];
		}
	}
	w = w.substr(i); // remaining to be dist. on both sides
	int ws = w.length();
	// cout << l << " " << r << " " << ws << "\n";
	if(l.length() == r.length()) {
		if(ws == 0) {
			cout << l+'|'+r;
		} else if(ws %2 == 0) {
			// dist. on both sides
			int mid = ws/2;
			// cout << "\nMID: " << mid << "\n";
			cout << l + w.substr(0,mid) + '|' + r + w.substr(mid);
		} else {
			cout << "Impossible";
		}
	} else {
		cout << "Impossible";
	}
}