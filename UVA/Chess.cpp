#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    char p; int m; int n; cin >> p >> m >> n;


    if(p == 'r' || p == 'Q') {
        cout << min(m, n) << endl;
    } else if(p == 'k') {
        cout << ceil(m*n/2.0) << endl;
    } else if(p == 'K') {
        cout << ((m+1)/2) * ((n+1)/2) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}