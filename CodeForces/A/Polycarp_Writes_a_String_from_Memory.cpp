#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t; cin >> t;
    while(t--) {
        set<char>st;
        string s; cin >> s;
        int ttl = 0;
        for(char c: s) {
            if(st.find(c) == st.end() && st.size() == 3) {
                ttl++;
                st.clear();
            }
            st.insert(c);
        }
        cout << ttl + ceil(st.size() / 3.0) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
