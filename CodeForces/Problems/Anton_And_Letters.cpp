#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
	string str; getline(cin, str);
	set<char>s;
	for(char c: str) {
		if(isalpha(c)) s.insert(c);
	}
	cout << s.size();		
}