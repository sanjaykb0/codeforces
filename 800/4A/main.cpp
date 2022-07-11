#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string solve(int x) {
    string res;
    if (x == 0 || x == 1 || x == 2 || x % 2 != 0) {
        res = "NO";
    } else {
        res = "YES";
    }

    return res;
}

int main() {
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}