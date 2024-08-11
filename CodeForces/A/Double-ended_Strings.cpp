#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t; cin >> t;
    while(t--) {
        string a = "";
        string b = "";
        cin >> a >> b;
        int mxSize = 0;
        for(int i = 0; i < a.size() ; i++) {
            string sub = "";
            for(int j = i; j < a.size(); j++) {
                sub += a[j];
                int x = b.find(sub);
                if(x != string::npos) {
                    mxSize = max(int(sub.size()), mxSize);
                }
            }
        }
        int minOps = (int(a.size()) - mxSize) + (int(b.size()) - mxSize);
        cout << minOps << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
