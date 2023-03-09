#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >>t;
	while(t--) {
		int n; cin >>n;
		vector<int>v;
		vector<int>sorted;

		for(int i = 0; i < n; ++i) {
			int x; cin >> x;
			v.push_back(x);
		}


		sorted = v;

		sort(sorted.rbegin(), sorted.rend());

		int max1 = sorted[0];
		int max2 = sorted[1];


		for(int i =0; i < n; i++) {
			int diff;
			if(v[i] == max1) { 
				diff = v[i] - max2;
			} else {
				diff = v[i]-max1;
			}
			cout << diff << " ";
		}
		cout << endl;
	}
}