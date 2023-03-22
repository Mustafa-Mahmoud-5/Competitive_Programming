#include <iostream>
#include <string>
#include <map>
using namespace std;


void solve_NLOGN() {
	int k; cin >> k;
	string s; cin >>s;
	int n = s.size();
	map<long long, long long>prefix_sums;
	prefix_sums[0] = 1;
	long long prefix_sum = 0;
	long long counter = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1')
			prefix_sum++;
		counter += prefix_sums[prefix_sum - k];
		prefix_sums[prefix_sum]++;
	}
	cout << counter << endl;
}


int main() {
	solve_NLOGN();
}
