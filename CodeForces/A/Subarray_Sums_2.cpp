#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main () {
	// form sum prefix array P
	// Px - Py = SubArr y+1 => Px
	// if Px == 7
	//		++
	// if Px < 7
	//      count px - 7, add them
	// if Px > 7
	//		count px - 7, add them

	int n, x; cin >> n >> x;
	vector<long long> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	map<long long, int> prfx_sums;
	prfx_sums[0] = 1;

	long long sum = 0;
	long long counter = 0;

	for(long long el: v) {
		sum+= el;
		counter += prfx_sums[sum - x];
		prfx_sums[sum]++;
	}

	cout << counter << endl;
}