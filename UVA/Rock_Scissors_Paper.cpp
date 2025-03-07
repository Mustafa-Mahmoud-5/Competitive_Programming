#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValidPos(int i, int j, int r, int c) {
    return i >= 0 && i <= r && j >=0 && j <= c;
}
map<char, char> canBeat = {{'R', 'S'}, {'P', 'R'}, {'S', 'P'}};
vector<pair<int,int>> neighbours = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

void solve(int ct) {


    int r, c ,n; cin >> r >> c >> n;
    vector<string>curr;
    vector<string>temp;


    for(int i = 0; i < r; i++) {
        string s; cin >> s;
        curr.push_back(s);
        temp.push_back(s);
    }


    while(n--) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                for(auto nb: neighbours) {
                    int in = i+nb.first;
                    int jn = j+nb.second;
                    if(isValidPos(in, jn, r-1, c-1)) {
                        char nc = curr[in][jn];
                        if(canBeat[nc] == curr[i][j]) {
                            temp[i][j] = nc;
                            break;
                        }
                    }
                }
            }
        }


        // set curr = temp

        for(int i = 0; i < r; i++) {
            curr[i] = temp[i];
        }


    }


    if(ct != 1) cout << endl;
    for(string s: curr) {
        cout << s << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;

    for(int i = 1; i <= t; i++) {
        solve(i);
    }


    return 0;
}
