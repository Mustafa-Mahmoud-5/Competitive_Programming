#include <iostream>
#include <string>
using namespace std;
int main () {
	int n, k; cin >> n >> k;
	int count = 0;
	while(n--) {
		string x; cin >> x;
		bool good = true;
		int curr = 0;
		while(curr<=k) {
			bool is_found = false;
			for(int c: x) {
					if(c-48 == curr) {
					is_found = true;
					break;
				}
			}
			if(!is_found) {
				good = false;
				break;
			}
			curr++;
		}
		if(good) count++;
	}
	cout << count;
}



// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
// 	int n, k; cin >> x;

// }