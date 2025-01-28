#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, x; cin >> n >> x;
	vector<pair<int, int>>v;
	for(int i = 1; i <= n;i++) {
		int x; cin >>x;
		v.push_back(make_pair(x,i));
	}
	sort(v.begin(), v.end());


	int p1 = 0; int p2 = n - 1;
	while(p1 < p2) {
		int agg = v[p1].first + v[p2].first;
		if(agg == x) {
			int idx1 = v[p1].second;
			int idx2 = v[p2].second;
			// print ascendingly
			if(idx1 < idx2) {
				cout << idx1 << " " << idx2 << endl;
			} else {
				cout << idx2 << " " << idx1 << endl;
			}
			return 0;
		} else if (agg > x) {
			p2--;
		} else {
			p1++;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}