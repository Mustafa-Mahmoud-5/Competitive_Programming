#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;

    vector<int> players(a, 1);
    vector<int> diceTurns(c);
    map<int, int> sl;

    while(b--) {
        int from, to; cin >> from >> to;
        sl[from]  = to;
    }

    for(int i = 0; i < c; i++) {
        cin >> diceTurns[i];
    }


    for(int i = 0; i < c; i++) {
        int pi = i % players.size(); // turn's player idx
        int dice = diceTurns[i];

        if(players[pi] + dice > 100) {
            players[pi] = 100;
        } else {
            players[pi] += dice;
        }


        if(sl.find(players[pi]) != sl.end()) players[pi] = sl[players[pi]];


        if(players[pi] == 100) {
            break;
        }
    }

    for(int i = 0; i < a; i++) {
        cout << "Position of player " << i+1 << " is " << players[i] << "." << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

