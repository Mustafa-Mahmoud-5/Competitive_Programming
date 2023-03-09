#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template<typename T1>
void display(vector<T1> v) {
	cout << "[ ";
	for(auto el: v) {
		cout  << el << " ";
	}
	cout << "]" << endl;
}


int main() {
	vector<char> s_ltrs= {'m', 'e', 'o', 'w'};
	int t; cin >>t;
	for(int ti = 1; ti<=t; ti++){
		int n; cin >>n;
		string sound; cin >> sound;
		int p = 0;
		for(int i = 0; i < sound.length(); i++) {
			if(sound[i] !== s_ltrs[p]) {
				p++;
			}  
		}

	}	
}