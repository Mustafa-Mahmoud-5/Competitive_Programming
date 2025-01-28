#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	int n,k; cin >> n >> k;
	vector<char>alpha;

	char c = 'a';
	while(c <= 'z') {
		alpha.push_back(c);
		c++;
	}

	string s = "";
	int i = 1;
	while(s.size() != n) {
		s+= alpha[i-1];
		i++;
		if(i == k + 1) i = 1;
	}

	cout << s;
}