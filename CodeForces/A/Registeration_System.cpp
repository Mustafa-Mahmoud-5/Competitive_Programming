#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    map<string, int> m;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >>s;
        auto it = m.find(s);
        if(it != m.end()) {
            cout << s + to_string(m[s]) << endl;
            m[s]++;
        } else {
            m[s] = 1;
            cout << "OK" << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
