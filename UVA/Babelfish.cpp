#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    map<string, string>m;
    string line = "";
    while(getline(cin, line)) {
        if(line == "") {
            break;
        }
        string key = "";
        string val = "";
        string word = "";
        for(int i = 0; i < line.size(); i++) {
            if(line[i] == ' ') {
                key = word;
                word = "";
            } else {
                word += line[i];
            }
        }
        val = word;
        word = "";
        m[val] = key;
    }

    while(getline(cin, line)) {
        string word = "";
        for(char c: line) {
            word += c;
        }
        if(m.find(word) != m.end()) {
            cout << m[word] << endl;
        } else {
            cout << "eh" << endl;
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
