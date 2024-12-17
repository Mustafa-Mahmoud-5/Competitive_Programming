#include <bits/stdc++.h>
using namespace std;
// 1-BASED-IDX
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 10 matrices maximum
int p[11]; // the dimensions of matrices

int T[11][11]; // T[a][b]=the optimal number of multiplication of p[a]...p[b]
int D[11][11]; // D[a][b]=the decision (value of k) that gets T[a][b]

// Top down version
int MatChain(int a, int b) {
    if (a == b) return 0;
    if (T[a][b] != -1) return T[a][b];
    T[a][b] = INT_MAX;

    for (int k = a; k < b; k++) {
        int left = MatChain(a, k);
        int right = MatChain(k+1, b);

        int current = left + right + (p[a-1] * p[k] * p[b]);

        if (current < T[a][b]) {
            T[a][b] = current;
            D[a][b] = k;
        }
    }
    return T[a][b];
}

void MatChainTopDown(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            T[i][j] = -1;
        }
    }
    MatChain(1, n);
}

// BottomUp version
void MatChainBottomUp(int n) {
    for(int i =1; i <= n; i++) {
        T[i][i] = 0;
    }
    // loop over Chains of length 2 to n
    for(int len = 2; len <= n; len++) {
        for(int i = 1; i<= n - len + 1; i++) {
            int j = i + len - 1;
            T[i][j] = INT_MAX;
            for(int k = i; k < j; k++) {
                int c = T[i][k] + T[k+1][j] + (p[i-1] * p[k] * p[j]);
                if(c < T[i][j]) {
                    T[i][j] = c;
                    D[i][j] = k;
                }
            }
        }
    }
}

// Recursive to output the solution for both versions
// inorder traversal
void MatChainSol(int a, int b) {
    if(a == b) {
        cout << "A" << a;
        return;
    }
    int k = D[a][b];
    cout << "(";
    MatChainSol(a, k);
    cout << " x ";
    MatChainSol(k+1, b);
    cout << ")";
}
void Compute() {
    int n;
    int tc = 1;
    while(cin >> n && n) {
        int r, c;
        cin >> r >> c;
        p[0] = r; p[1] = c;
        for(int i = 2; i <= n; i++) {
            cin >> r >> c;
            p[i-1] =r;
            p[i] = c;
        }
        MatChainBottomUp(n);
        cout << "Case " << tc++ << ": ";
        MatChainSol(1, n);
        cout << endl;

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //freopen("input_assign10_00348.txt", "r", stdin);
    Compute();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////