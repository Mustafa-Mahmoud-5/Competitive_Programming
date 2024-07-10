#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >>t;
    while(t--) {
        stack<char>stk1;
        stack<char>stk2;
        string s; cin >> s;
        int rbs = 0;
        for(char c: s) {
            if(c == '(') {
                stk1.push(c);
            } else if (c == '[') {
              stk2.push(c);
            } else if(c == ')') {
                if(!stk1.empty()) {
                    stk1.pop(); rbs++;
                }
            } else if(c == ']') {
                if(!stk2.empty()) {
                    stk2.pop(); rbs++;
                }
            }
        }
        cout << rbs << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
