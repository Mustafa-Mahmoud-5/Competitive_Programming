#include <iostream>
#include <set>
using namespace std;

int main() {
	int n; cin >> n;
	set<int> lvls;
	for(int i = 1; i <= 2; ++i) {
		int l; cin >>l;
		for(int j = 1; j <= l; ++j) {
			int a; cin >> a;
			lvls.insert(a);
		}
	}


	cout << ((lvls.size() == n) ? "I become the guy." : "Oh, my keyboard!");
}