#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, m; cin >> n >> m;
	map<char, bool> clrs =  {{'C', true}, {'M', true}, {'Y',true}};

	bool colored = false;
	for(int i = 1; i<=n * m; ++i) {
		char cc; cin >> cc;
		if(clrs[cc]) {
			colored = true;
			break;
		}
	}

	cout << (colored ? "#Color" : "#Black&White");
}