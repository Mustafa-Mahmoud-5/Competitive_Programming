#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// O(N^2)
void solve_N2() {
	int t; cin >>t;
	while (t--) {
		int n; cin >>n;
		vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}


		// find max
		int len = v.size();
		int mx = 0;
		int inv_max = 0;
		for(int i = 0; i < len; i++) {
			int l = 0; int r = 0;
			for(int j = 0; j < len; j++) {

				if(j > i && v[i] == 1 && v[j] == 0)
					mx++;


				// find which one to change
				if(j == i)
					continue;

				// left ones
				if(j < i && v[j] == 1)
					l++;
				// right zeros
				if(j > i && v[j] == 0)
					r++;
			}

			if(v[i] == 1) {
				inv_max = max(inv_max, l-r);
			} else {
				inv_max = max(inv_max, r-l);
			}
	}
	cout << mx+inv_max << "\n";
	}

} 
// O(N)
void solve_N() {
	int n; cin >>n;
	
	vector<int> v(n);
	
	long long rz = 0; // right zeros
	long long lo = 0; // left ones
	
	for(int i = 0; i < n; i++){
		int x; cin >>x;
		if(x == 0) {
			rz++;
		}
		v[i] = x;
	}



	long long initial_max = 0;
	long long max_inv = 0;

	for(int i = 0; i < n; i++) {
		if(v[i] == 0) {
			rz--;
			// cout << lo << " " << rz << endl;
			max_inv = max(max_inv, rz-lo);
		}

		if(v[i] == 1) {
			initial_max+=rz;
			
			// cout << lo << " " << rz << endl;

			max_inv = max(max_inv, lo - rz);
			lo++;
		}
	}
	long long res = initial_max + max_inv;
	cout << res << "\n";
}
int main() {
	int t; cin >>t;
	while(t--) {
		solve_N();
	}
}






// mn 0 le 1

// 3dd el esfar el 3ala el ymen akbar mn el w7ayd => X
// e3tmd el maximum x


// mn 1 le 0
// 3dd el 1 el 3al4mal akbar mn el 0 el 3alymen

// e3tmd el max


// calculate initial max

// inv_max = 0

// if(1)
// idx Left ones > Right zeros
// 1   0  4  -4
// 3   1  3  -2


// 4   2  1   1
// 8   3  0   3

// if(0)
// idx Left ones < right zeros
// 2   1  3  2


// 5   3  2  -1
// 6   3  1  -2
// 7   3  0  -3

// return initial_max + inv_max
