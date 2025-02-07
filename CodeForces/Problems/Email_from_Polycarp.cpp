#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    while(n--) {
        map<char, int> sfq;
        map<char, int> tfq;
        string s; string t; cin >> s >> t;

        if(s.size() > t.size()) {
            cout << "NO" << endl;
            continue; // end this case
        }


        string res = "YES\n";
        int j = 0;
        for(int i = 0; i < s.size();i++) {
            if(j >= t.size()) {
                res = "NO\n";
                break;
            }
            if(s[i] != t[j]) {
                res = "NO\n";
                break;
            }
            // they matched


            // to move j to next position if we are not at the final element of s
            if(i != s.size() -1) {
               if(s[i] == s[i+1]) {
                   j++;
               }
               if(s[i] != s[i+1]) {
                   while(j < t.size() && t[j] == s[i]) {
                       j++;
                   }
               }
            } else {
                // if i is exhausted

                // if j is not exhausted but t[j] is a different value, then return false
                while(j < t.size()) {
                    if(t[j] != s[i]) {
                        res = "NO\n";
                        break;
                    }
                    j++;
                }
            }
        }
        cout << res;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}