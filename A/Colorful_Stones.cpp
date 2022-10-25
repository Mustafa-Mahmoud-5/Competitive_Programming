#include <iostream>
#include <string>
using namespace std;
int main () {
	string stns;
	cin >> stns;
	string inst;
	cin >> inst;
	int idx = 0;
	for(int i = 0; i < inst.size(); ++i) {
		if(inst[i] == stns[idx]) idx++;
	}
	cout << idx + 1;
}