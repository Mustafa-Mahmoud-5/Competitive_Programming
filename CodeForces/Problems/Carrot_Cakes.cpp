#include <iostream>
using namespace std;
int main() {
	int n,t,k,d; cin >> n >> t >> k >> d;
	
	if(k >= n) {
		cout << "NO";
		return 0;
	}

	int p1 = n / k;
	int t1 = p1 * t;

	// oven

	int ovn_ptchs = d / k;
	if(ovn_ptchs == 0) ovn_ptchs = 1;
	int cks = ovn_ptchs * k;
	int rmnd = n - cks; // new goal after removing cks cooked by first oven in that time



	int prll_cks = 2 * k;
	int p2 = rmnd / prll_cks;
	if(p2 == 0) p2 = 1;
	int t2 = (p2 * t) + d;

	// cout << t2 << " " << t1 << "\n";

	if(t1 <= t2) cout << "NO";
	else cout << "YES";
}