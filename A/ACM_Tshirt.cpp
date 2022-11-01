#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main () {
	int n,q; cin >>n >>q;
	vector<int>v;
	for(int i = 1; i<=n; i++) {
		int x; cin >>x;
		v.push_back(x);
	}


	sort(v.begin(), v.end());


	while(q--) {
		int p1 = v[0];
		int p2 = v[v.size() - 1];

		int m; cin >> m;
		if(m > p2) {
			cout << p2;
		} else if(m < p1) {
			cout << p1;
		} else {
			bool is_found = false;
			for(int i = 0; i < v.size(); i++) {
				if(v[i] == m) {
					is_found = true;
					cout << m << "\n";
					break;
				}
			}

			if(is_found) continue;

			for(int i =0; i< v.size(); i++) {
				if(v[i] < m && m < v[i+1]) {
					if(abs(v[i] - m) <= abs(v[i+1] - m)) cout << v[i] << "\n";
					else cout << v[i+1] << "\n";
					break;
				}	
			}

		}
	}
}