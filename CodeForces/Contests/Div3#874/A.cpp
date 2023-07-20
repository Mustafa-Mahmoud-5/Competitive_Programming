#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n; cin >>n;
    string s; cin >> s;
    set<string> records;
    for(int i =0; i < n-1; i++) {
        string rec = to_string(s[i]) + to_string(s[i+1]);
        records.insert(rec);
    }
    cout << records.size() << endl;
}


int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}

