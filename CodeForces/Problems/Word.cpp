#include <iostream>
#include <string>
using namespace std;

int main () {

	string s;
	cin >> s;

	int l = 0;
	for(char c: s) {
		if(islower(c)) l++;
	}

	int len = s.length();
	if(l >= (len - l)) {
		for(int i = 0; i < len; i++) {
			s[i] = tolower(s[i]);
		}
	} else {
		for(int i = 0; i < len; i++) {
			s[i] = toupper(s[i]);
		}

	}
	cout << s;

}