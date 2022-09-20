#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t, n, f, b, res;

    f = 0;
    b = 0;
    res = 0;

    char tmp;
    cin >> t;
    string s = "";

    while (t--) {
        res = 0;
        f = 0;
        b = 0;

        cin >> n;
        while (n--) {
            cin>>tmp;
            s.push_back(tmp);
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' && s[i+1] == ')') {
                res++;
                continue;
            }

            if (s[i] == '(') {
                f++;
            }

            if (s[i] == ')') {
                b++;
                if (f < b) {
                    res++;
                    b--;
                }
            }
        }

        cout << res;
    }

}