#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >>t;
    while(t--) {
        string s; cin >>s;
        if(s.size() % 2 != 0 || s[0] == ')' || s[s.size() - 1] == '(') cout << "NO\n";
        else cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
