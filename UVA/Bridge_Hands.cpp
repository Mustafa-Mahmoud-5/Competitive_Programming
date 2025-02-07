#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<char, int> suit = {{'C', 1}, {'D', 2}, {'S', 3}, {'H', 4}};
map<char, int> rnk = {{'T', 10}, {'J', 11}, {'Q', 12 }, {'K', 13},{'A', 14}};
string dir = "NESW";

struct compare {
    bool operator()(const pair<char, char>&p1, const pair<char, char>&p2) const {
        if(p1.first == p2.first) {
            // if suit is the same, compare by ranks
            int r1, r2;
            if(rnk.count(p1.second)) {
                r1 = rnk[p1.second];
            } else {
                r1 = p1.second - '0';
            }


            if(rnk.count(p2.second)) {
                r2 = rnk[p2.second];
            } else {
                r2 = p2.second - '0';
            }

            return r1 < r2;
        } else {
            return suit[p1.first] < suit[p2.first];
        }
    }
};



void solve() {
    char N;
    while(cin >> N && N != '#') { // test cases end with #
        map<char, set<pair<char, char>, compare>> players;

        string l1, l2; cin >> l1 >> l2;

        l1+=l2;

        int turn = (dir.find(N) + 1) % 4;
        for(int i = 0; i < l1.size() - 1; i+=2) {
            char s = l1[i];
            char r = l1[i+1];
            char player = dir[(turn++ % 4)];
            players[player].insert(make_pair(s, r));
        }

        string plyrs = "SWNE";
        for(int i = 0; i <  plyrs.size(); i++) {
            cout << plyrs[i] << ":";
            for(auto card: players[plyrs[i]]) {
                cout << " " << card.first << card.second;
            }
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}