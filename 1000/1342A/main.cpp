#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll x, ll y, ll a, ll b) {
    ll tmp;
    if (x == 0 && y == 0) {
        return 0;
    }

    ll res = a * (x + y);

    if (x > y) {
        tmp = ( b * y ) + a * ( x - y );
    } else {
        tmp = ( b * x ) + a * ( y - x );
    }

    return res > tmp ? tmp : res;
}

int main() {
    ll t, x, y, a, b;
    vector<ll> res;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cin >> a >> b;
        res.push_back(solve(x, y, a, b));
    }

    for (auto x : res) {
        cout << x << endl;
    }
}