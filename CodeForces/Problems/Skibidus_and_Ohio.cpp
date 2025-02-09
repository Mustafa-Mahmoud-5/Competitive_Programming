#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >>s;
    int i = 0;
    while(i <=  s.size() -2 && s.size() > 1) {
        if(s[i] == s[i+1]) {
            if(i!=0) {
                s[i] = s[i-1];
            } else {
                if(i+2 < s.size()) {
                    s[i] = s[i+2];
                }
            }
            s.erase(i+1, 1);
            i = 0;
        } else {
            i++;
        }
    }
    cout << s.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
