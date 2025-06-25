#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool haveSameParity(int a, int b) {
    bool isAEven = a%2 == 0;
    bool isBEven = b%2 == 0;
    return (isAEven && isBEven) || (!isAEven && !isBEven);
}

void solve() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    int sm = 0;
    int s = 1;
    for (int i = 0; i < n - 1; i++) {
        if (haveSameParity(v[i], v[i+1])) {
            s++;
        } else {
            sm += (s-1);
            s = 1;
        }
    }
    sm += (s-1);
    cout << sm << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
