#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    ll res;
    cin >> n;

    vector<ll> v1 = {8, 4, 2, 6};
    while (n > 4) {
        n -= 4;
    } 

    if (n <= 0) {
        res = 1;
    } else {
        res = v1[n-1];
    }

    cout << res << endl;
}