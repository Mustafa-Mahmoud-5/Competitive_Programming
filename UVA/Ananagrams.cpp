#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2) {
    for(char &c: s1) {
        c = tolower(c);
    }

    for(char &c: s2) {
        c = tolower(c);
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

void solve() {
    string word;
    set<string>d;
    set<string> a;
    while(cin >> word && word != "#") {
        d.insert(word);
    }


    for(auto i = d.begin(); i != d.end(); i++) {
        bool isA = true;
        for(auto j = d.begin(); j != d.end(); j++) {
            if(i != j && isAnagram(*i, *j)){
                isA = false;
                break;
            }
        }
        if(isA) {
            a.insert(*i);
        }
    }

    for(string w: a) {
        cout << w << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
