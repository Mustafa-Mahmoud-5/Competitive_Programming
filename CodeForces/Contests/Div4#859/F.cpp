#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m, i, j, i2, j2; cin >> n >> m >> i >> j >> i2 >> j2;
	string s; cin >> s;
	int up = 1;
	int right = m;
	int left = 1; 
	int down = n;


	int si, sj;
	si = i;
	sj = j;

	int bounces = 0;
	while(true) {
		cout << bounces << endl;
		if(s[0] == 'D') {
			i++;
		}
		 if(s[0] == 'U') {
			i--;
		}

		if(s[1] == 'R') {
			j++;
		} 
		if(s[1] == 'L') {
			j--;
		}


		cout << i << " " << j << endl;

		if(i == i2 && j == j2) {
			break;
		}


		if(i == si && j == sj) {
			bounces = -1;
			break;
		}



		if(i == down) {
			s[0] = 'U';

			if(j == right) {
				s[1] = 'L';
			}

			if(j == left) {
				s[1] = 'R';
			}

			bounces++;
		}

		if(i == up) {
			s[0] = 'D';
			if(j == right) {
				s[1] = 'L';
			}

			if(j == left) {
				s[1] = 'R';
			}

			bounces++;
		}
		cout << s[0] << " " << s[1] << endl;

	}

	cout << bounces << endl;
}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}