#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(int n, int m, int k) {
    if (m == 0) {
        return 0;
    }

    ll h = n / k;

    if (m % h == 0) {
        return 0;
    }

    if (h >= m) {
        return m;
    }

    return 1;
}

int main() {
    int t;
    int n, m, k;

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        cout << solve(n, m, k) << endl;
    }
}
