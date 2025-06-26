#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int a, b, n; cin >> a >> b >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    ll s = b - 1;

    for (int i = 0; i < n; i++) {
        int c = min(x[i]+1, a);
        s+= c-1;
    }

    cout << s+1 << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
