#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
//    int mn = 0;
    int n = s.size();
    unordered_set<int> seen;
    for(int i = 1; i <= n; i++) {
        for(int c = 0; c < n - (i-1); c++) {
            string sub = s.substr(c, i);
            int subVal = stoi(sub);
            seen.insert(subVal);
        }
        int sz = pow(10, i);
        for(int m = 0;m < sz; m++) {
            if(seen.find(m) == seen.end()) {
                cout << m << endl; return;
            }
        }
    }

}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}