#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string word;
    for(int i = 1; i <= (8*8); i++) {
        char c; cin >> c;
        if(c != '.') {
            word += c;
        }
    }
    cout << word << "\n";
}

int main () {
    int t; cin >>t;
    while(t--) {
        solve();
    }
}