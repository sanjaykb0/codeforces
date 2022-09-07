#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
using ll =long long;

int main() {
    int n, c; 
    cin >> n;
    string tmp, main, alt;
    c = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;

        if (i == 0) {
            main = tmp;
        } 

        if (tmp == main) {
            c++;
        }  else {
            alt = tmp;
        }
    }

    if (c >= (n - c)) {
        cout << main << endl;
    } else {
        cout << alt << endl;
    }
}
