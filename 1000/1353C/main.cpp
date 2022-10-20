#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll n) {
    ll c = 1;
    ll m = 1;
    ll r = 0;
    while (c < n) {
        r += 8 * m * m;
        m++;
        c += 2;
    }
    return r;
}

int main() {
    ll n, t;
    cin >> t;
    vector<ll> res(t);
    for (ll i = 0; i < t; i++) {
        cin >> n;
        res[i] = solve(n);
    }

    for (auto x : res) {
        cout << x << endl;
    }
}