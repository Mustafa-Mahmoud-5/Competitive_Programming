#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int gridSize = 10;
int blocks = 5;

// 1-based
bool isInRingX(int r, int c, int x) {
    // all rules for a cell to be in some ring X, at least one must be satisfied
    bool c1 = (r == x && (x <= c && c <= gridSize-x+1));
    bool c2 = (r == gridSize-x+1 && (x <= c && c <= gridSize-x+1));
    bool c3 = (c == x && (x <= r && r <= gridSize-x+1));
    bool c4 = (c == gridSize-x+1 && (x <= r && r <= gridSize-x+1));

    return (c1 || c2 || c3 || c4);
}


int getScore(int r, int c) {
    for (int i = 1; i <= blocks; i++) {
        if (isInRingX(r, c, i)) {
            return i;
        }
    }
    return 0;
}

    void solve() {
    vector<string> grid(gridSize);
    for (int i = 0; i < gridSize; i++) {
        cin >> grid[i];
    }


    int score = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (grid[i][j] == 'X') {
                score += getScore(i+1, j+1);
            }
        }
    }

    cout << score << endl;;
}



    int main () {
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

        int t; cin >> t;
        while (t--) {
            solve();
        }
        return 0;

    }
