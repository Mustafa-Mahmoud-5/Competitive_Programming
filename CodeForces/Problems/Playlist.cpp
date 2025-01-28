#include <iostream>
#include <map>
using namespace std;

void solve_N2() {
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int mx = 0;
	for(int i = 0; i < n; i++) {
		map<int, bool> m;
		int s = 0;
		for(int j = i; j < n; j++) {
			if(m.count(arr[j])) {
				break;
			}
			m[arr[j]] = true;
			s++;
		}
		if (s > mx) mx = s;
	}
	cout << mx << endl;
}

void display_map(map<int,int> m) {
	cout << "{ ";
	for(auto el: m) {
		cout << el.first << ": " << el.second << "| ";
	}
	cout << "}" << endl;
}

void solve_N() {
	int n; cin >> n;
	int arr[n+1] = {};
	for(int i = 1 ; i<=n; i++) {
		cin >> arr[i];
	}


	int sum = 0;
	int max_sum = 0;
	int p = 1;
	map<int,int> m;
	for(int i = 1; i <=n; i++) {
		sum++;
		int el = arr[i];
		// display_map(m);
		if(!m.count(el)) {
			m[el] = i;
			// cout << "1" << endl;
		} else {
			// cout << "2" << endl;
			// found it
			if(m[el] >= p) {
				// cout << "Found" << i << endl;
				sum = i - m[el];
				p = m[el] + 1;
			}
			m[el] = i;
		}
		max_sum = max(sum, max_sum);
		// cout << " " << el << " " << i << " " << p << " " << sum << " " << max_sum<<  endl;
	}
	cout << max_sum << endl;
}



int main () {
	solve_N();
}

// 4 5 8
// 1 4 5 6 4 7 12 5 6 1 7 4 9 10 11
// 1 2 3 4   5  6           7 8  9
