#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n, x; cin >> n >> x;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    v.push_back(x);

    int mx_dist = INT_MIN;
    for (int i = 0; i < v.size(); i++) {
        if (i==0) {
            mx_dist = max(mx_dist, v[i]);
        } else if (i == v.size()-1) {
            mx_dist = max(mx_dist, (v[i] - v[i-1])*2);
        } else {
            mx_dist = max(mx_dist, v[i] - v[i-1]);
        }
    }

    cout << mx_dist << endl;
}



int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}

