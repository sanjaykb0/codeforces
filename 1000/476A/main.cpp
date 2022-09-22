#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m) {
    int count, anticount;
    count = 0;
    anticount = 0;

    if (n == m) {
        return n;
    }

    if (n < m) {
        return -1;
    }

    while (n != 0) {
        if (n == 1) {
            count++;
            n--;
        } else {
            count++;
            anticount++;
            n -= 2;
        }
    }

    while (count % m != 0) {
        if (anticount == 0) {
            return -1;
        }
        count++;
        anticount--;
    }

    return count;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout<<solve(n, m)<<endl;
}