#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string solve (int n) {
    if (n == 1) {
        return "-1";
    }

    string tmp = "";
    if (((n - 1) + 3) % 3 != 0) {
        n -= 1;
        while (n--) {
            tmp.append("2");
        }
        tmp.append("3");
        return tmp;
    } else if (((n - 1) + 9) % 9 != 0) {
        n -= 1;
        while (n--) {
            tmp.append("2");
        }
        tmp.append("9");
        return tmp;
    }

    else {
        n -= 1;
        while (n--) {
            tmp.append("2");
        }

        tmp.append("7");
        return tmp;
    }
}

int main() {
    int n, t;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}