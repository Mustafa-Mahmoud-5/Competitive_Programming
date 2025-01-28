
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    stack<char>stk;
    int len = 0;
    for(char c: s) {
        if(c == '(') {
            stk.push('(');
        } else {
            if(!stk.empty() && stk.top() == '(') {
                len++;
                stk.pop();
            }
        }
    }
    cout << len * 2 << endl;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
    