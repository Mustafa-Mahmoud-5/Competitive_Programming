#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >>t;
	for(int i = 1; i<=t; i++) {
		int n; cin >>n;
		vector<int> v;
		int negativese = 0;
		for(int j = 1; j<=n; j++) {
			int a; cin >>a;
			if(a < 0) negativese++;
			v.push_back(a);
		}

		int s2 = 0;
		for(int el: v) {
			s+= el;
		}

		// check if we would sort and flip
		if(negativese >= 1) {
			sort(v.begin(), v.end());
			v[0] = - v[0];
			v[1] = - v[1];
		}

		// SUM
		int s2 = 0;
		for(int el: v) {
			s+= el;
		}
		if(s1 > s2)
		cout<< s << "\n";
	}
}