#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >>n;
	map<string, int>goals;
	for(int i = 1; i <= n; ++i) {
		string g; cin >> g;
		if(goals[g]) {
			goals[g]++;
		} else {
			goals[g] = 1;
		}
	}



	int max = -1;
	string max_goal = "";
	for(auto const& [key, val] : goals) {
		if(val > max) {
			max = val;
			max_goal = key;
		}
	}

	cout << max_goal;
}