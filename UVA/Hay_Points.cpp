#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    map<string, int> d;
    int m, n; cin >> m >> n;

    while(m--) {
        string word; int dollar; cin >> word >> dollar;
        d[word] = dollar;
    }

    while(n--) {
        int sm = 0;
        string line;
        while(getline(cin, line)) {
            if(line == ".") {
                break;
            }
            line += " ";
            string word = "";
            for(char c: line) {
                if(c == ' ') {
                    if(d.find(word) != d.end()) {
                        sm += d[word];
                    }
                    word = "";
                } else {
                    word += c;
                }
            }
        }
        cout << sm << endl;
    }
}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
