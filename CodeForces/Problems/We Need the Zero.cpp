#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {

    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }


    int to = pow(2, 8);
    for (int i = 0; i <= to; i++) {
        int x = v[0]^i;
        for (int j = 1; j < n; j++) {
            x = ((x^i) ^ v[j]);
        }
        if (x == 0) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
