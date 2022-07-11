#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    ll sum = 0;
    ll res = 0;
    ll tmp;

    cin>>n;
    for (ll i = 0; i < n; i++) {
        sum = 0;

        for (ll j = 0; j < 3; j++) {
            cin>>tmp;
            sum += tmp;
        }
        if (sum > 1) {
            res++;
        }
    }

    cout<<res<<endl;
}