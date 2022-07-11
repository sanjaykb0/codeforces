#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int c = 0;
    string tmp;
    cin>>n;
    n++;


    while (--n) {
        cin>>tmp;
        if (tmp[0] == '+' || tmp[2] == '+') {
            c++;
        } else {
            c--;
        }
    }
    cout<<c<<endl;
}