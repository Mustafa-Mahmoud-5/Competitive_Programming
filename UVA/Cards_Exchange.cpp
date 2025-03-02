#include <iostream>
#include <bits/stdc++.h>
using namespace std;




void solve(){
    int a, b;

    // 1<= x,y <= 10^5
    while(cin >> a >> b && a+b != 0) {
        int as[100001] ={0};
        int bs[100001] ={0};
        vector<int> v1;
        vector<int> v2;

        for(int i = 0; i < a; i++) {
            int x; cin >> x;
            if(!as[x]) {
                v1.push_back(x);
                as[x] = 1;
            }
        }


        for(int i = 0; i < b; i++) {
            int y; cin >> y;
            if(!bs[y]) {
                v2.push_back(y);
                bs[y] = 1;
            }
        }



        int n = 0; int m = 0;
        for(int x: v1) {
            if(!bs[x]) n++;
        }

        for(int y: v2) {
            if(!as[y]) m++;
        }

        cout << min(n, m) << endl;
    }





}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}