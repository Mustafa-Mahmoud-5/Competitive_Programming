#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	// string x = "";
	// char a = 'a';
	// string y = "+";
	// cout << a + y;
	// in c++ you can't add ctype strings or a ctype chars or ctype string with ctype char, you have to have at least one c++ string type


	string x; cin >> x;
	vector<char> sv;
	for(char c: x) {
		if(isdigit(c)) sv.push_back(c);
	}
	sort(sv.begin(), sv.end());
	int v_len = sv.size();
	for(int i = 0; i < v_len; ++i) {
		cout << sv[i];
		if(i != v_len - 1) cout << '+';
	}


}