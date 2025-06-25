#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve() {

    int n, a, b; cin >> n >> a >> b;
    if ((a == n && b == n) || (a+b+2 <= n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
