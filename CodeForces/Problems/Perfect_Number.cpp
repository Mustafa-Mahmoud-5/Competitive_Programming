#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    int cnt = 0;
    long long num = 19;

    while(cnt != k) {
        string s = to_string(num);
        long long sm = 0;
        for(char &c: s) {
            sm+= c - '0';
        }
        if(sm == 10) {
            cnt++;
            if(cnt == k) {
                cout << num << endl;
            }
        }
        num+=9;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();


    return 0;
}

