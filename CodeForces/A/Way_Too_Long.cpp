#include <iostream>
#include <string>
using namespace std;
int main() {

	int n; cin >> n;


	while(n--) {
		string str; cin >> str;
		int len = str.length();
		if(len > 10) {
			str = str[0] + to_string(len-2) + str[len - 1];
		}
		cout << str << "\n";
	}
}
