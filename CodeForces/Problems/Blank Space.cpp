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

    int lrg = 0;
    int c = 0;
    int i = 0;
    while (i < n) {
        if (v[i] == 1) {
            c = 0;
        } else {
            c++;
        }

        lrg = max(lrg, c);
        i++;
    }

    cout << lrg << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
