#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    long long n; cin >> n;

    vector<long long> pos;
    vector<long long> neg;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a >= 0) {
            pos.push_back(a);
        } else {
            neg.push_back(a);
        }
    }

    if(pos.size() == 1 && neg.size() == 1) {
        cout << pos[0] * neg[0] << endl;
    } else {
        long long pos_product = -1;
        long long neg_product = -1;

        if(pos.size() >= 2) {
            sort(pos.rbegin(), pos.rend());
            pos_product = pos[0] * pos[1];
        }

        if(neg.size() >= 2) {
            sort(neg.begin(), neg.end());
            neg_product = neg[0] * neg[1];
        }

        cout << max(pos_product, neg_product) << endl;
    }
}

int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}