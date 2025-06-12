#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    if (!is_sorted(v.begin(), v.end())) {
        cout << 0 << endl;
        return;
    }

    int mn = INT_MAX;
    for (int i = 0; i < n-1; i++) {
        mn = min(mn, v[i+1] - v[i]);
    }

    cout << (mn/2)+1 << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
