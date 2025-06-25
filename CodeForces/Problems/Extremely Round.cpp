#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve() {
    int n; cin >> n;
    int prev = n;
    int ttl = 0;
    while (true) {
        prev = n;
        n = n/10;
        if (n==0) {
            ttl += prev;
            break;
        } else {
            ttl+= 9;
        }
    }
    cout << ttl << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
