#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    map<int, int>mf;
    map<int, int>mb;
    int n;


    cin >> n;


    for(int i = 0; i < n; i++) {
        int f, b; cin >> f >> b;
        if(mf.find(f) == mf.end()) {
            mf[f] = 1;
        } else {
            mf[f]++;
        }

        if(f != b) {
            // increase the back of this number
            if(mb.find(b) == mb.end()) {
                mb[b] = 1;
            } else {
                mb[b]++;
            }


            // if the back number is not found in front, set it to 0
            if(mf.find(b) == mf.end()) {
                mf[b] = 0;
            }
        }
    }


    int minn = INT_MAX;
    bool found = false;

    int half = ceil(n/2.0);

    for(auto el: mf) {

        if(el.second >= half) {
            found = true;
            minn = 0;
            break;
        }

        if(mb.find(el.first) != mb.end()) {
            if(el.second + mb[el.first] >= half) {
                int minReq = half - el.second;
                minn = min(minn, minReq);
                found = true;
            }
        }
    }


    if(found) {
        cout << minn << endl;
    } else {
        cout << -1;
    }





}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
