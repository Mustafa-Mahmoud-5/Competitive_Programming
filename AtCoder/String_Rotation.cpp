#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s, t; cin >> s >> t;
    int i = s.find(t[0]);
    int j = 0;
    if(i == string::npos) {
        cout <<  "No" << endl; return;
    }
    for(int k = 1; k <= s.size(); k++) {
        if(s[i] != t[j]) {
            cout << "No" << endl; return;
        } else {
            j++;
            if(i == s.size() - 1) {
                i = 0;
            } else {
                i++;
            }
        }
    }
    cout << "Yes" << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
