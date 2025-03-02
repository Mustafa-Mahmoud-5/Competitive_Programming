#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void output(int m, int n, int res) {
    cout << res << " knights may be placed on a " << m << " row " << n << " column board." << endl;
}

void solve() {
    int m, n;
    while(cin >> m >> n && m+n != 0) {
        int res = 0;
        if(m == 0 || n == 0) {
            res = 0;
        } else if (m == 1) {
            res = n;
        } else if (n == 1) {
            res = m;
        } else if (m == 2 || n == 2) {
            int width = (m==2) ? n : m;
            int c = 1;
            bool b = true;
            int i = 1;
            while(i <= width) {
                if(b) {
                    i++;
                    b = !b;
                } else {
                    i+=3;
                    b = !b;
                }
                if(i <=width) c++;
            }
            res = c*2;
        } else if (m >= 3 && n >= 3) {
            res =  ceil(m*n / 2.0);
        }
        output(m, n, res);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}