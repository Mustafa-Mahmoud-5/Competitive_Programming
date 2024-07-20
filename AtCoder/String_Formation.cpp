#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    bool end = 1; // 1 back, 0 front
    string s; cin >> s;
    int q; cin >> q;

    while(q--) {
        int t; cin >>t;
        if(t == 1) {
            // reverse
            end = !end;
        } else {
            int f; cin >> f;
            char c; cin >> c;

            // push
            if(f == 1) { // push front
                if(end == 1) {
                    s = c + s;
                } else { // push back
                    s += c;
                }
            } else { // push back
                if(end == 1) {
                    s += c;
                } else { // push front
                    s = c + s;
                }
            }
        }
    }

    if(end == 0) {
        reverse(s.begin(), s.end());
    }
    cout << s << endl;

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
