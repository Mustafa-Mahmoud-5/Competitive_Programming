#include <iostream>
#include <set>
#include <string>
using namespace std;
int main () {
	set<int> alpha;

	int n; cin >> n;

	string s; cin >> s;
	for(char c: s) {
		alpha.insert(tolower(c));
	}
	if(alpha.size() == 26) cout << "YES";
	else cout << "NO";
}