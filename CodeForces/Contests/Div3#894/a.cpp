#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    map<int, char> vika = {{1, 'v'}, {2, 'i'}, {3, 'k'}, {4, 'a'}};

    char mx[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c; cin >> c;
            mx[i][j] = c;
        }
    }

    int idx = 1;

    for(int c = 0; c < m; c++) {
        for (int r = 0; r < n; r++) {
            if(mx[r][c] == vika[idx]) {
//                cout << vika[idx] << " VIKA\n";
                idx++;
                break;
            }
        }
    }

    if (idx <= 4) {
        cout << "NO\n";
    } else{
        cout << "YES\n";
    }
 }

int main () {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}