#include <iostream>
#include <string>
using namespace std;

void another_sol() {
	// string str; cin >> str;
	// string demo = "0000";
	// int len = str.length();
	// int p = 0;
	// for(int i = 4-len; i<4; ++i) {
	// 	demo[i] = str[p];
	// 	++p;
	// }
	// cout << demo;

}

int main () {
	string str;
	cin >> str;
	string demo = "";
	for(int i = 1; i <= 4 - str.length(); ++i) {
		demo += '0';
	}
	demo += str;
	cout << demo;
}






