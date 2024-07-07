#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >>t;
    while(t--) {
        stack<char> stk;
        int n; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                stk.push('(');
            } else {
                if(!stk.empty() && stk.top() == '(') {
                    stk.pop();
                }
            }
        }
        cout << stk.size() << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
