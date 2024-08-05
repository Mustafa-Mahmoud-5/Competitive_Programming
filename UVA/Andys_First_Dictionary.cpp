#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    string str;
    set<string> s;
    while(getline(cin, str)) {
        string word = "";
        for(char c: str) {
            if(isalpha(c)) {
                word += tolower(c);
            } else {
                if(word != "") {
                    s.insert(word);
                    word = "";
                }
            }
        }
        if(word != "") {
            s.insert(word);
            word = "";
        }
    }
    for(string w: s) {
        cout << w << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
