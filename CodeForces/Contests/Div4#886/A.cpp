#include <iostream>
#include <bits/stdc++.h>
using namespace std;




void solve() {
    vector<int> digits;
    for(int i = 0; i < 3; i++) {
        int x; cin >>x;
        digits.push_back(x);
    }
    sort(digits.rbegin(), digits.rend());
    if((digits[0] + digits[1]) >= 10) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main () {
    int t; cin >>t;
    while(t--) {
        solve();
    }
}