#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r;

    while(cin >> r && r != -1) {
        string ans, con; cin >> ans >> con;

        int att = 7;
        for(char c: con) {
            if(ans.empty() || att == 0) {
                break;
            }
            if(ans.find(c) == string::npos) {
                att--;
            } else {
                ans.erase(remove(ans.begin(), ans.end(), c), ans.end());
            }
        }

        cout << "Round " << r << endl;
        if(att == 0) {
            cout << "You lose.";
        } else {
            if(ans.empty()) {
                cout << "You win.";
            } else if (!ans.empty()) {
                cout << "You chickened out.";
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
