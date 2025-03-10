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
    string t;
    getline(cin, t);
    for(int i = 1; i <= stoi(t); i++) {
        string s = "";
        getline(cin, s);

        string ts = "";
        for(char c: s) {
            if(isalpha(c)) {
                ts += c;
            }
        }

        double k = sqrt(ts.size());
        if(k != int(k)) {
            cout << "Case #" << i << ":" << endl;
            cout << "No magic :(";
        } else {
            if(!isPalindrome(ts)) {
                cout << "Case #" << i << ":" << endl;
                cout << "No magic :(";
            } else {
                cout << "Case #" << i << ":" << endl;
                cout << int(k);
            }
        }
        cout << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}