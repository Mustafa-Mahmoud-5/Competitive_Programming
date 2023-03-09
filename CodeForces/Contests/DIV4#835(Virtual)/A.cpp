#include <iostream>
#include <set>
using namespace std;

int main() {
	int t; cin >>t;
	while(t--) {
		int x;
		int a, b, c; cin >> a >> b >> c;
		set<int> s;
		s.insert(a);
		s.insert(b);
		s.insert(c);
		auto f = s.begin();
		f++;
		cout << *f << "\n"; 
	}
}