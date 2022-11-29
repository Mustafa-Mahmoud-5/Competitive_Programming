#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2; cin >> s1 >> s2;
	
	if(s1 == s2) {
		cout << -1;
		return 0;
	}

	int len1 = s1.length();
	int len2 = s2.length();
	if(len1 > len2 ){
		cout << len1;
	} else {
		cout << len2;
	}

}