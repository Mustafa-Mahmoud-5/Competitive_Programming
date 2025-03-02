#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mat[8][8];

bool isInRange(int r, int c) {
    if(r >= 0 && r <= 7 && c >= 0 && c <= 7) return true;
    return false;
}




void buildQueenLegalAllowedCells(set<int> &kl, set<int>&ql, set<int>&qa,  int q, int k) {
    int qr = q/8; // row
    int qc = q%8; // col


    // move left
    for(int c = qc-1; c >= 0; c--) {
        if(mat[qr][c] == k) {
            break;
        }else if(kl.find(mat[qr][c]) != kl.end()) {
            ql.insert(mat[qr][c]);
        }  else {
            ql.insert(mat[qr][c]);
            qa.insert(mat[qr][c]);
        }
    }

    // move right
    for(int c = qc+1; c <= 7; c++) {
        if(mat[qr][c] == k) {
            break;
        } else if(kl.find(mat[qr][c]) != kl.end()) {
            ql.insert(mat[qr][c]);
        }  else {
            ql.insert(mat[qr][c]);
            qa.insert(mat[qr][c]);
        }
    }


    // move up
    for(int r = qr-1; r >= 0; r--) {
        if(mat[r][qc] == k) {
            break;
        } else if(kl.find(mat[r][qc]) != kl.end()) {
            ql.insert(mat[r][qc]);
        }  else {
            ql.insert(mat[r][qc]);
            qa.insert(mat[r][qc]);
        }
    }

    // move down
    for(int r = qr+1; r <= 7; r++) {
        if(mat[r][qc] == k) {
            break;
        } else if(kl.find(mat[r][qc]) != kl.end()) {
            ql.insert(mat[r][qc]);
        }  else {
            ql.insert(mat[r][qc]);
            qa.insert(mat[r][qc]);
        }
    }
}


bool isKingBlocked(set<int>&kl, set<int>&ql) {
    bool isBlocked = true;
    for(int klm: kl){
        if(ql.find(klm) == ql.end()) {
            isBlocked = false;
            break;
        }
    }
    return isBlocked;
}


void solve(){




    int k, q, qTo;
    if (!(cin >> k >> q >> qTo)) return;


    set<int>kl;
    set<int>ql;
    set<int>qa;

    // new position
    set<int>nql;
    set<int>nqa;

    if(k == q) {
        cout << "Illegal state" << endl;
        return;
    }

    int el = 0;
    for(int i  = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            mat[i][j] = el++;
        }
    }

    // determine king legal moves
    int kr = k / 8;
    int kc = k%8;

    if(isInRange(kr+1, kc)) {
        kl.insert(mat[kr+1][kc]);
    }

    if(isInRange(kr-1, kc)) {
        kl.insert(mat[kr-1][kc]);
    }


    if(isInRange(kr, kc+1)) {
        kl.insert(mat[kr][kc+1]);
    }


    if(isInRange(kr, kc-1)) {
        kl.insert(mat[kr][kc-1]);
    }






    buildQueenLegalAllowedCells(kl, ql, qa, q, k);

    if(ql.find(qTo) != ql.end()) {
        if(qa.find(qTo) != qa.end()) {
            buildQueenLegalAllowedCells(kl, nql, nqa, qTo, k);
            bool isBlocked = isKingBlocked(kl, nql);
            if(isBlocked) {
                cout << "Stop" << endl;
            } else {
                cout << "Continue" << endl;
            }
        } else {
            cout << "Move not allowed" << endl;
        }
    } else {
        cout << "Illegal move" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    while(!cin.eof()) {
        solve();
    }

    return 0;
}