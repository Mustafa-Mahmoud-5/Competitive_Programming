#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int>v;
	int sum = 0;
	for(int i = 0; i < n; ++i) {
		int a; cin >> a;
		sum+= a;
		v.push_back(a);
	}
    sort(v.begin(), v.end(), greater<int>());
    int c;
    int total = 0;
    for(int i = 0; i < v.size(); ++i) {
    	total += v[i];
    	if(total > sum - total) {
    		c = i + 1;
    		break;
    	}
    }
    cout << c;


	// 4
	// 3 1 2 2 3

}