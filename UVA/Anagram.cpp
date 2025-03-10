#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//void perm(int idx, string &s, vector<string> &p) {
//    if(idx == s.size()) {
//        p.push_back(s); return;
//    }
//    for(int i = idx; i < s.size(); i++) {
//        swap(s[idx], s[i]);
//        perm(idx+1, s, p);
//        swap(s[idx], s[i]);
//    }
//}


bool compare(string a, string b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) {
            continue;
        } else if(tolower(a[i]) == tolower(b[i])) {
            if (isupper(a[i])) return true;
            else return false;
        } else {
            if(islower(a[i]) && isupper(b[i]) || isupper(a[i]) && islower(b[i])) return tolower(a[i]) < tolower(b[i]);
            return a[i] < b[i];
        }
    }
}



void solve() {
    vector<string> p;
    string s; cin >> s;
    sort(s.begin(), s.end());
    do {
        p.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    sort(p.begin(), p.end(), compare);
    for(auto x: p) {
        cout << x << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

