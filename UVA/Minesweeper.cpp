#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjacentSquares {{-1, 0}, {1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1,1}, {1, -1}, {1,1}};

bool isInField(int i, int j, int m, int n) {
   if(i >= 0 && i <= m-1 && j >= 0 && j <= n-1) return true;
   return false;
}
void solve() {
    int m, n;
    int t = 1;
    while(cin >> m >> n && n+m != 0) {
        if(t != 1) cout << endl;
        vector<vector<char>> field(m, vector<char>(n, '.'));
        vector<vector<int>> cnt(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++) {
            string r; cin >> r;
            for(int j = 0; j < n; j++) {
                field[i][j] = r[j];
                cnt[i][j] = 0;
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                for(auto sqr: adjacentSquares) {
                    if(isInField(i+sqr.first, j+sqr.second, m, n) && field[i+sqr.first][j+sqr.second] == '*') {
                        cnt[i][j]++;
                    }
                }
            }
        }

        cout << "Field #" << t++ << ":" << endl;
        for(int i = 0; i < m; i++) {
            string s = "";
            for(int j = 0; j < n; j++) {
                if(field[i][j] == '*') {
                    s+= "*";
                } else {
                    s+= to_string(cnt[i][j]);
                }
            }

            cout << s << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
