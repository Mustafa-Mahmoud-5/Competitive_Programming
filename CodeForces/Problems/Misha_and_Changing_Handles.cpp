#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<string, string>m;
    int n; cin >> n;
    while(n--) {
        string olds, news; cin >> olds >> news;
        if(m.find(olds) == m.end()) {
            m[news] = olds;
        } else {
            m[news] = m[olds];
            m.erase(olds);
        }
    }
    cout << m.size() << endl;
    for(auto el: m) {
        cout << el.second << " " << el.first << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
