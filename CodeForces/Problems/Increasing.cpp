#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int>v;
	int c = 1;
	for(int i = 1; i<= n; i++) {
		int x; cin >>x;
		v.push_back(x);
	}


	for(int i =0; i < n; i++) {
		if(v[i] >= v[i+1]) break;
		c++;
	}


	cout << c;
}