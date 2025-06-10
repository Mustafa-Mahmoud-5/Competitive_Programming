#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {

    int n; cin >> n;
    string s; cin >> s;

    int dc = 0;
    int i = 0;
    for (i; i < n-2; i++) {
        if (s[i] == '.') {
            dc +=1;
            if (s[i+1] == '.' && s[i+2] == '.') {
                cout << 2 << endl;
                return;
            }
        }
    }

    for (i; i < n; i++) {
        if (s[i] == '.') {
            dc+=1;
        }
    }

    cout << dc << endl;
}



int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}

