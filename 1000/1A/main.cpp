#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int a) {
    int r1;

    if (a >= m) {
        r1 = 1;
    } else {
        r1 = (m % a) + m / a; 
    }


}

int main() {
    int n,m,a;
    cin>>n>>m>>a;
    int r1, r2;

    int res = solve(n, m, a);

    cout<<res<<endl;

}