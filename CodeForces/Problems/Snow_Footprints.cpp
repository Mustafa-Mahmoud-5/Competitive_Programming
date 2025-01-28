#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	string fp; cin >> fp;
	int s = 0;
	int e = 0;
	for(int i = 0; i < n; i++) {
		if(!s && fp[i] == '.' && fp[i+1] != '.') {
			s = i+1;
		}

		if(fp[i] == 'R' && fp[i+1] == 'L') {
			e = i;
			break;
		}

		if(fp[i] == '.' && (fp[i+1] == 'L' || fp[i-1] == 'R')) {
			e = i;
			break;
		}
}
	cout << s+1 << " " << e+1 << endl;
}
