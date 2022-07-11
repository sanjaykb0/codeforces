#include <bits/stdc++.h>
using namespace std;

int solve(int m, int n) {
    if (m <= 0 || n <= 0) {
        return 0;
    }

    return ((m / 2) * n) + (n / 2) * (m % 2);
}

int main() {
    int m, n;
    cin>>m>>n;
    cout<<solve(m, n)<<endl;
}