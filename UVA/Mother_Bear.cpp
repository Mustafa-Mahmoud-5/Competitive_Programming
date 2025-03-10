#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string &s) {
    int i = 0;
    int j = s.size() - 1;
    while(i <= j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


void solve() {
    set<char> cases = {'.', ',', '!', '?', ' '};
    string s = "";
    string t = "";

    while(getline(cin, s)) {
        if(cin.bad() || s == "DONE") break;

        for(char c: s) {
            if(cases.find(c) == cases.end()) {
                t += tolower(c);
            }
        }

        if(isPalindrome(t)) {
            cout << "You won't be eaten!" << endl;
        } else {
            cout << "Uh oh.." << endl;
        }

        t = "";
        s = "";

    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}