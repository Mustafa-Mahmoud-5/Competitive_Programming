#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search() {

}

void solve() {
    map<string, int>m;
    set<pair<int, string>, greater<>>st;
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        m[s]= i;
    }

    for(auto el: m) {
        st.insert({el.second, el.first});
    }

    for(auto el: st) {
        cout << el.second << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
