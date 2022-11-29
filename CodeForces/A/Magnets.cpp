#include <iostream>
#include <string>
using namespace std;
int main () {
	int n; cin >> n;
	int g = 1;
	char right;
	for(int i = 1; i <= n; ++i) {
		string m; cin >> m;
		char left = m[0];
		if(left == right) g++;
		right = m[1];
	}

	cout << g;
}