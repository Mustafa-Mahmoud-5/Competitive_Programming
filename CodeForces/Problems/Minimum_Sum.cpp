#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<char, int> charToIdx{
            {'a', 0},
            {'b', 1},
            {'c', 2},
            {'d', 3},
            {'e', 4},
            {'f', 5},
            {'g', 6},
            {'h', 7},
            {'i', 8},
            {'j', 9}
    };

    vector<string>integers;
    map<char, int>digits;
    vector<pair<long long, char>> cw(10); // character's weight   from a to j... size = 10
    set<char> first; // store characters that appeared at first idx
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        integers.push_back(s);
        first.insert(s[0]);
        int size = s.size();
        for(int i = 0; i < size; i++) {
            char c = s[i];
            cw[charToIdx[c]].second = c;
            cw[charToIdx[c]].first += (long long)pow(10, size-i);
        }
    }


    sort(cw.begin(), cw.end(), [](const pair<long long, char> p1, const pair<long long, char> &p2) {
        return p1.first > p2.first;
    });


    int next = 1;
    bool isZeroTaken = false;

    for(int i = 0; i < cw.size(); i++) {
        char c = cw[i].second;
        if(cw[i].first == 0) continue;
        if(first.find(c) == first.end() && !isZeroTaken) { // character didn't appear at first, so we can give it 0
            digits[c] =0;
            isZeroTaken = true;
        } else {
            digits[c] = next++;
        }
    }

    long long sm = 0;
    for(int i = 0; i < integers.size();i++) {
        for(char &c: integers[i]) {
            c = '0' + digits[c];
        }
        sm+= stoi(integers[i]);
    }

    cout << sm << endl;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();


    return 0;
}

