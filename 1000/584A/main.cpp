#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
   ll n;
   string t;
   cin >> n >> t;

   string res = "";
   ll tmp = n;
   if (t == "10") {
    res += "1";
    tmp--;
    while (tmp--) {
        res += "0";
    }
   }
   else {
    while (tmp--) {
        res += t;
    }
   }

   ll len = t.length();
   if (len > n) {
    res = "-1";
   }
   cout << res << endl;
}