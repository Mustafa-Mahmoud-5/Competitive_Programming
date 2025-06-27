#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sub = 1;
    int mxSub = 1;
    sort(v.begin(), v.end());
    for (int i = 0; i < n-1; i++) {
        if (v[i+1] - v[i] <= k) {
            sub++;
        } else {
            sub = 1;
        }
        mxSub = max(mxSub, sub);
    }


    cout << n-mxSub << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}