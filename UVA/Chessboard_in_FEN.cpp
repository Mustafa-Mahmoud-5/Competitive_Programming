//10284 - Chessboard in FEN
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool attacked[8][8] = {false};
char board[8][8] = {'x'};
// attack moves for each player
vector<pair<int, int>>kingMoves{{0, 0}, {-1,0}, {1,0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1,1}};
vector<pair<int, int>>knightMoves{{0,0}, {-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, -2}, {1, -2}, {-1 ,2}, {1,2}};
vector<pair<int, int>>whitePawnMoves{{0,0}, {-1, 1}, {-1, -1}};
vector<pair<int, int>>blackPawnMoves{{0,0}, {1, 1}, {1, -1}};

bool isValidPos(int r, int c) {
    return (r >= 0 && r<=7 && c >= 0 && c <= 7);
}


void moveLinear(int r, int c) {
    int i = r; int j = c;
    // right
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        j++;
    }

    // left
    i = r; j = c;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        j--;
    }

    // up
    i = r; j = c;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i--;
    }



    // down
    i = r; j = c;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i++;
    }
}

void moveDiagonal(int r, int c) {
    // up right
    int i = r; int j = c;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i--;
        j++;
    }

    i = r;  j = c;
    // up left;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i--;
        j--;
    }

    i = r; j = c;
    // down right;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i++;
        j++;
    }

    i = r; j = c;
    // down left;
    while(isValidPos(i, j) && (board[i][j] == 'x' || (i == r && j == c))) {
        attacked[i][j] = true;
        i++;
        j--;
    }
}

void moveKing(int r, int c) {
    for(auto move: kingMoves) {
        int i = r+move.first; int j = c+move.second;
        if(isValidPos(i, j)) {
            attacked[i][j] = true;
        }
    }
}

void moveKnight(int r, int c) {
    for(auto move: knightMoves) {
        int i = r + move.first;
        int j = c + move.second;
        if(isValidPos(i, j)) {
            attacked[i][j] = true;
        }
    }
}

void movePawn(int r, int c, char p) {

    if (p == 'P') {
        // white Pawn
        for(auto move: whitePawnMoves) {
            if(isValidPos(r+move.first, c+move.second)) {
                attacked[r+move.first][c+move.second] = true;
            }
        }
    } else {
        // black pawn
        for(auto move: blackPawnMoves) {
            if(isValidPos(r+move.first, c+move.second)) {
                attacked[r+move.first][c+move.second] = true;
            }
        }
    }
}

void display(char mat[8][8]) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}




void solve() {
    string s;
    if(!(cin >> s)) return;

    // reset
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j<8; j++) {
            board[i][j] = 'x';
            attacked[i][j] = false;
        }
    }

    vector<string>rows;
    string row = "";
    for(char c: s) {
        if(c == '/') {
            rows.push_back(row);
            row  = "";
        } else {
            row+=c;
        }
    }
    rows.push_back(row);


    for(int i = 0; i < rows.size(); i++) {
        int j = 0;
        for(char c: rows[i]) {
            if(isdigit(c)) {
                int cd = c - '0';
                while(cd--) {
                    board[i][j++] = 'x';
                }
            } else {
                board[i][j++] = c;
            }
        }
    }




    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            char piece = board[i][j];
            if(piece == 'K' || piece == 'k') {
                moveKing(i, j);
            } else if(piece == 'Q' || piece == 'q') {
                moveDiagonal(i, j);
                moveLinear(i, j);
            } else if(piece == 'R' || piece == 'r') {
                moveLinear(i, j);
            } else if(piece == 'B' || piece == 'b') {
                moveDiagonal(i, j);
            } else if(piece == 'N' || piece == 'n') {
                moveKnight(i, j);
            } else if(piece == 'P' || piece == 'p') {
                movePawn(i, j, piece);
            }
        }
    }

    int c = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j<8; j++) {
            if(!attacked[i][j] && board[i][j] == 'x') {
                c++;
            }
        }
    }

    cout << c << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    while(!cin.eof()) {
        solve();
    }

    return 0;
}

