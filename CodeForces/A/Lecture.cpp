#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    map<string, string>mp;
    int n, m; cin >> n >> m;
    while(m--) {
        string a, b; cin >> a >> b;
        mp[a] = b;
    }
    while(n--) {
        string a; cin >> a;
        if (a.size() <= mp[a].size()) {
            cout << a;
        } else {
            cout << mp[a];
        }
        if(n!= 0) cout << " ";
    }
}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
