#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<string, int>m;
    string s;
    int n; cin >> n;
    cin >> s;
    for(int i = 0; i < n - 1; i++) {
        string grm = string(1, s[i]) + string(1, s[i+1]);
        if(m.find(grm) == m.end()) {
            m[grm] = 1;
        } else {
            m[grm]++;
        }
    }
    int mx = -1;
    string mxGram = "";
    for(auto el:m) {
        if(el.second > mx) {
            mx = el.second;
            mxGram = el.first;
        }
    }

    cout << mxGram << endl;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
