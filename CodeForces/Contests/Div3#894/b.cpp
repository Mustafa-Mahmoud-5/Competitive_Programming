#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n; int odd = 0;
    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        if(a % 2 != 0) odd++;
    }

    if(odd % 2 != 0) {
        cout << "no\n";
    } else {
        cout << "YES\n";
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}