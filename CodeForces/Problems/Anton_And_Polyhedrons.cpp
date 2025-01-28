#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
	map<string, int>polys = {{"Tetrahedron", 4},{"Cube", 6},{"Octahedron", 8},{"Dodecahedron", 12}, {"Icosahedron", 20}};
	
	int n; cin >> n;
	int sum = 0;
	for(int i = 1; i<=n; ++i) {
		string p; cin >> p;
		sum += polys[p];
	}
	cout << sum;
}