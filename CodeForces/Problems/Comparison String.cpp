#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int lrgSb = 1;
    int sb = 1;
    for (int i = 0; i < s.size() -1; i++) {
        if (s[i] == s[i+1]) {
            sb++;
        } else {
            sb = 1;
        }
        lrgSb = max(lrgSb, sb);
    }
    cout << lrgSb+1 << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}