#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> s;
	for(int i = 1; i<= 4; i++) {
		int sh; cin >>sh;
		s.insert(sh);
	}


	cout << 4 - s.size();
}