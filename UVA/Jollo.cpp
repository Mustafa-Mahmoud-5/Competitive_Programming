#include <iostream>
#include <bits/stdc++.h>
using namespace std;




void solve(){

    int a, b, c, d, e;
    while(cin >> a >> b >> c >> d >> e && a+b+c+d+e !=0) {
        vector<int> princessCards(4, 0);
        vector<int> exist(53, 0);
        exist[a] = 1;
        exist[b] = 1;
        exist[c] = 1;
        exist[d] = 1;
        exist[e] = 1;
        princessCards[1] = a;
        princessCards[2] = b;
        princessCards[3] = c;
        sort(princessCards.begin(), princessCards.end());

        int c1 = 0;
        int c2 = 0;
        for (int j = 1; j <= 3; j++) {
            if (e > princessCards[j]) {
                c1++;
            }
            if (d > princessCards[j]) {
                c2++;
            }
        }


        bool failCases = (c1+c2 < 3) || ((c1 == 1 && c2 == 2) || (c1 == 2 && c2 == 1));
        if(failCases) {
            cout << -1 << endl;
            continue;
        }

        int thirdCard = 0;
        if((c1 == 2 && c2 == 2) || (c1 == 2 && c2 == 3 )  || (c1 == 3 && c2 == 2)) {
            thirdCard = max(princessCards[1], princessCards[2]) + 1;
        } else if ( (((c1 == 1) && (c2 == 3)) || ((c1 == 3) && (c2 == 1)))    ||    (((c1 == 0) && (c2 == 3)) || ((c1 == 3) && (c2 == 0)))  ) {
            thirdCard = *max_element(princessCards.begin(), princessCards.end());
        } else if(c1 == 3 && c2 == 3) {
            thirdCard = 1;
        }


        while(exist[thirdCard]) {
            thirdCard++;
        }
        if(thirdCard > 52) {
            cout << -1 << endl;
        } else {
            cout << thirdCard << endl;
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}