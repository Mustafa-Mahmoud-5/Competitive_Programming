#include <iostream>
using namespace std;
int main () {
   int n,a,b,sol=0;cin>>n;
    int current = 0;
    for (int i = 1; i < n; ++i) {
        cin>>a>>b;
        current += (b-a);
        cout << "current: " << current << endl;
        sol=max(sol,current);
    }
    cout << "current: " << current << endl;

  	cout<<"Solution: " << sol;
}
