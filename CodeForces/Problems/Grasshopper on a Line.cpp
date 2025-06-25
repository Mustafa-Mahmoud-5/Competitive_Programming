#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int x, k; cin >> x >> k;
    vector<int> v;
    while (x!=0) {
        int lrg = x;
        while (lrg % k == 0) {
            lrg--;
        }
        v.push_back(lrg);
        x-=lrg;
    }

    cout << v.size() << endl;
    for (int e : v) {
        cout << e << " ";
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
