#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll getMaximumValue(ll a, ll b, ll c) {
    ll res;

    if (a == 1) {
        res = (1 * (b + c) > (1 + b) * c) ? (1 * (b + c)) : (1 + b) * c;
    }

    else if (b == 1) {
        res = ((a + 1) * c) > (a * (1 + c)) ? (a + 1) * c : a * (1 + c);
    }

    else if (c == 1) {
        res = ((a + b) * 1) > (a * (b + 1)) ? ((a + b) * 1) : (a * (b + 1));
    }

    else {
        res = a * b * c;
    }

    res = res > a + b + c ? res : a + b + c;
    return res;
}

int main() {
    ll a, b, c;
    cin>>a>>b>>c;

    cout<<getMaximumValue(a, b, c)<<endl;
}