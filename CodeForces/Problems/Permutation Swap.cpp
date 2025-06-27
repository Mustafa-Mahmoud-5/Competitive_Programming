#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n; cin >> n;
    vector<int>v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }


    int gd = v[1] - 1;
    for (int i = 1; i <= n; i++) {
        int diff = abs(v[i] - i);
        gd = gcd(gd, diff);
    }

    cout << gd << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}