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

    string s;
    while(cin >> s) {
        set<string>uq;

        for(int i = 0; i < s.size(); i++) {
            string sub = "";
            for(int j = i; j < s.size(); j++) {
                sub += s[j];
                if(isPalindrome(sub)) {
                    uq.insert(sub);
                }
            }
        }

        cout << "The string " << "'" << s << "'" << " contains " << uq.size() << " palindromes." << endl;

    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
